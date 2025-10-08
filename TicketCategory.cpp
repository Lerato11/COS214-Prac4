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

    // std::vector<TicketSystem*>::iterator it;

    std::cout << "[" << this->getName() << ": (" << std::endl;

    for (size_t i = 0; i < children.size(); ++i) {
        children[i]->print();

        if (i != children.size() - 1){
            std::cout << ", ";
        }
    }

    std::cout << ")]" << std::endl;
}
