/*class SmartPtr{
public:
    explicit SmartPtr(TestClass *T);
    TestClass* operator ->();
    TestClass operator *();
    class ptrType{
        public:
            void info();
    };
    ptrType* get();
    TestClass* release();
private:
    TestClass *ptr;
};*/
#include "SmartPtr.h"

SmartPtr::SmartPtr(TestClass *T){
    ptr = std::move(T);
}

TestClass* SmartPtr::operator->(){
    return this->ptr;
}
TestClass& SmartPtr::operator*() const{
    return *ptr;
}

const TestClass& SmartPtr::operator*() {
    return *ptr;
}

TestClass* SmartPtr::release(){
    TestClass* tmp = std::move(ptr);
    ptr = nullptr;
    return tmp;
}
