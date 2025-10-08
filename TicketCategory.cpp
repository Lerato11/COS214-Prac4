#include "TicketCategory.h"

TicketCategory::TicketCategory(std::string name): name(name){

}


TicketCategory::~TicketCategory(){

    std::vector<TicketSystem*>::iterator it;

    for (it = this->children.begin(); it != this->children.end(); ++it){
        delete *it;
    }

}


std::string TicketCategory::getName(){
    return this->name;
}


void TicketCategory::setName(std::string name){
    this->name = name;
}

void TicketCategory::add(TicketSystem* item){
    children.push_back(item);
}

void TicketCategory::print(){

    std::vector<TicketSystem*>::iterator it;

    std::cout << "[" << this->getName() << ": (" << std::endl;

    for (it = this->children.begin(); it != this->children.end(); ++it){
        (*it)->print();

            if (it != children.end()){
                std::cout << ", ";
            }
    }

    std::cout << ")]" << std::endl;
}
