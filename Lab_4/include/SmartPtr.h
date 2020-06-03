#include "TestClass.h"
#include <iostream>
class SmartPtr{
public:
    using ptrType = TestClass;
    explicit SmartPtr(TestClass *T);
    ~SmartPtr(){
        delete ptr;
    }
    SmartPtr(SmartPtr&& s){
        ptr = std::move(s.ptr);  
        s.ptr = nullptr; 
    }
    SmartPtr& operator=(SmartPtr&& s){
        delete ptr;
        ptr = std::move(s.ptr);
        s.ptr = nullptr;
        return *this;
    }
    TestClass*  operator ->();
    TestClass& operator *() const;
    const TestClass& operator *();
    TestClass* get() const{
        return ptr;
    };
    TestClass* release();
    explicit operator bool() const{
        if(this->ptr!=nullptr)
            return true;
        return false;
    }
private:
    TestClass *ptr;
};
