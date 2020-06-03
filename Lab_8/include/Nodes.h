#pragma once
#include <iostream>
#include <string>

class Node
{
public:
    Node(){
        next = nullptr;
    }
    virtual ~Node() = default;
    virtual void print() const=0;
    virtual Node* copy() = 0;
    Node* next;
};

class NodeInt : public Node{
public:
    
    explicit NodeInt(int);
    void print() const override;
    NodeInt* copy(){
        return new NodeInt(value);
    }
private:
   
    int value;
};

class NodeString : public Node{
public:
    explicit NodeString(std::string);
    void print() const override;
    NodeString* copy(){
        return new NodeString(value);
    }
private:
   
    std::string value;
};

