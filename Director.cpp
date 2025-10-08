#include "Director.h"

Director::Director(SystemMaker* maker): maker(maker){

}

std::vector<TicketInformation*> Director::getFinanceTickets(){
    return this->financeTickets;
}

std::vector<TicketInformation*> Director::getTechTickets(){
    return this->techTickets;
}

std::vector<TicketInformation*> Director::getGeneralTickets(){
    return this->generalTickets;
}

void Director::setFinanceTickets(std::vector<TicketInformation*> financeTickets){
    this->financeTickets = financeTickets;
}

void Director::setTechTickets(std::vector<TicketInformation*> techTickets){
    this->techTickets = techTickets;
}

void Director::setGeneralTickets(std::vector<TicketInformation*> generalTickets){
    this->generalTickets = generalTickets;
}

TicketSystem* Director::construct(){
    maker->reset();


    if (!financeTickets.empty()){
        maker->addCategory("Finance");

        std::vector<TicketInformation*>::iterator it;

        for (it = this->financeTickets.begin(); it != this->financeTickets.end(); ++it){
            maker->addFinanceTicket((*it)->getId(), (*it)->getInfo());
        
        }

    } 

    if (!techTickets.empty()){
        maker->addCategory("Tech");

        std::vector<TicketInformation*>::iterator it;

        for (it = this->techTickets.begin(); it != this->techTickets.end(); ++it){
            maker->addTechTicket((*it)->getId(), (*it)->getInfo());
        
        }

    } 

    if (!generalTickets.empty()){
        maker->addCategory("General");

        std::vector<TicketInformation*>::iterator it;

        for (it = this->generalTickets.begin(); it != this->generalTickets.end(); ++it){
            maker->addGeneralTicket((*it)->getId(), (*it)->getInfo());
        
        }

    } 

    return maker->getTicketSystem();
}