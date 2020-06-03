#include "PLinkedList.h"
PLinkedList::PLinkedList(){
    head_node = nullptr;
}
PLinkedList& PLinkedList::addFront(Node* ptr){
    if(head_node==nullptr){
        head_node=ptr->copy();
        head_node->next=nullptr;
    }
    else{
        Node* tmp = ptr->copy();
        tmp->next = head_node;
        head_node = tmp;
    }
    return *this;
}
const Node* PLinkedList::head()const{
    return head_node;
}
std::ostream& operator<<(std::ostream& out,const PLinkedList& obj){
    Node* tmp = obj.head_node;
    while(tmp!=nullptr){
        tmp->print();
        if(tmp->next!=nullptr)
            out<<" -> ";
        tmp = tmp->next;
    }
    return out;
}
PLinkedList::PLinkedList(PLinkedList&& to_move){
    head_node = std::move(to_move.head_node);
    
    std::cout<<"--- moving list: "<<to_move<<std::endl;
    to_move.head_node = nullptr;
}
PLinkedList& PLinkedList::operator=(PLinkedList&& to_move){
    head_node = std::move(to_move.head_node);
   
    std::cout<<"--- move assign: "<<to_move<<std::endl;
    to_move.head_node = nullptr;
    return *this;
}
PLinkedList::PLinkedList(const PLinkedList& obj){
    std::cout<<"--- copying list: "<<obj<<std::endl;
    head_node = obj.head_node;
}