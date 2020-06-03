#include "Animals.h"
#include <memory>
#include <vector>
#include <algorithm>

class Meadow{
public:
    Meadow()=default;
    void add(std::unique_ptr<Animal> to_add);
    void print(std::string header) const;
    void countNames() const;
    std::vector<Sheep*> getSheepHerd();
private:
    std::vector<std::unique_ptr<Animal>> animals_on_meadow;
};