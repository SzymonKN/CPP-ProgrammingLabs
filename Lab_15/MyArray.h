#include <vector>
#include <algorithm>
#include <memory>

//Klasa służąca do polimorfizmu
class Node
{
public:
    Node() = default;
    virtual void print() const = 0;
    virtual ~Node() = default;
};
//Klasa będąca obiektami różnych typów
template <typename T>
class Wrapper : public Node
{
public:
    Wrapper(T &to_assign) : value(to_assign){};
    T value;
    //Wypisywanie zawartości obiektu
    void print() const override;
};

template <typename T>
void Wrapper<T>::print() const
{
    std::cout << value;
}

//Klasa, która jest listą/tablicą obiektów różnych typów
class MyArray
{
public:
    ~MyArray();
    //Dodawanie obiektów różnych typów na koniec listy/tablicy
    template <typename T>
    void add(T to_add);
    //Usuwanie z listy/tablicy obiektów o konkretnym typie T
    template <typename T>
    void remove();
    //Wypisywanie zawartości listy/tablicy
    friend void operator<<(const std::string &text, const MyArray &a);

private:
    std::vector<std::unique_ptr<Node>> elements;
};

template <typename T>
void MyArray::add(T to_add)
{
    elements.push_back(std::make_unique<Wrapper<T>>(to_add));
}
template <typename T>
void MyArray::remove()
{
    auto it = std::remove_if(elements.begin(), elements.end(), [](std::unique_ptr<Node> &n) { return dynamic_cast<Wrapper<T> *>(n.get()); });
    elements.erase(it, elements.end());
}

void operator<<(const std::string &text, const MyArray &a)
{

    for (unsigned int i = 0; i < a.elements.size() - 1; ++i)
    {
        a.elements[i]->print();
        std::cout << text;
    }
    a.elements[a.elements.size() - 1]->print();

    std::cout << std::endl;
}