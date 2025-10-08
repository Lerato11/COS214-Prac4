#include "TicketLeaf.h"

TicketLeaf::TicketLeaf(std::string id, std::string info) : id(id), info(info){
    cmd = NULL;
}


TicketLeaf::~TicketLeaf(){

}


std::string TicketLeaf::getId(){
    return this->id;
}


std::string TicketLeaf::getInfo(){
    return this->info;
}

std::string TicketLeaf::getInfo(){
    return this->info;
}

TicketCommand* TicketLeaf::getCmd(){
    return this->cmd;
}

void TicketLeaf::setCmd(TicketCommand* cmd){
    this->cmd = cmd;
}

void TicketLeaf::add(TicketSystem* cmd){
    // this->cmd = cmd;
}

void TicketLeaf::print(){
    // this->cmd = cmd;
    std::cout << this->getId() << " - " << this->getInfo()  << std::endl;
}