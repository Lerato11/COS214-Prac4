#include "TicketSystemMaker.h"

TicketSystemMaker::TicketSystemMaker(): root(NULL), currentCategory(NULL){

}

void TicketSystemMaker::reset(){

    // if (currentCategory && root && currentCategory != root){
    //     delete currentCategory;
    // }

    if (root){
        delete root;
        root = NULL;
    }

    
    root = new TicketCategory("root");
    currentCategory = root;
}

void TicketSystemMaker::addCategory(std::string name){

    TicketSystem* item = new TicketCategory(name);
    root->add(item);

    currentCategory = item;

}

void TicketSystemMaker::addFinanceTicket(std::string id, std::string info){
    TicketLeaf* item = new TicketLeaf(id, info);
    
    item->setCmd(new FinanceCommand());

    currentCategory->add(item);
    
}

void TicketSystemMaker::addTechTicket(std::string id, std::string info){
    TicketLeaf* item = new TicketLeaf(id, info);

    
    item->setCmd(new TechCommand());

    currentCategory->add(item);
}

void TicketSystemMaker::addGeneralTicket(std::string id, std::string info){
    TicketLeaf* item = new TicketLeaf(id, info);

    
    item->setCmd(new GeneralCommand());

    currentCategory->add(item);
}

TicketSystem* TicketSystemMaker::getTicketSystem(){
    return this->root;
}