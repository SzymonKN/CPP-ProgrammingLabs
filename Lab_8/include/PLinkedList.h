#pragma once
#include <iostream>
#include "Nodes.h"

class PLinkedList{
public:
    PLinkedList();
    PLinkedList(const PLinkedList& obj);
    PLinkedList(PLinkedList&&);
    PLinkedList& operator=(PLinkedList&&);
    const Node* head() const;
    PLinkedList& addFront(Node*);
    friend std::ostream& operator<<(std::ostream& out,const PLinkedList& obj);
private:
    Node* head_node;
};