#include "Support.h"

Support::Support(): next(NULL){
    
}


Support::~Support(){
    if (this->next != NULL){
        delete this->next;
    }
}


void Support::setNext(Support* next){
    this->next = next;
}

void Support::support(TicketLeaf* ticket){
    if (next){
        next->support( ticket);
    } else {
        std::cout << "Ticket Unhandled" << std::endl;
    }


}