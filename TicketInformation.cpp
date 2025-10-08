#include "TicketInformation.h"

TicketInformation::TicketInformation(){
    // this->info = "";
    // this->id = "";
}

TicketInformation::TicketInformation(std::string id, std::string info): id(id), info(info){

}

void TicketInformation::setId(std::string id){
    this->id = id;
}

void TicketInformation::setInfo(std::string info){
    this->info = info;
}

std::string TicketInformation::getId(){
    return this->id;
}

std::string TicketInformation::getInfo(){
    return this->info;
}