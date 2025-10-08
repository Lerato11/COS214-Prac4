#include "FinanceSupport.h"

#include "FinanceCommand.h"

FinanceSupport::FinanceSupport(){
    
}

void FinanceSupport::support(TicketLeaf* ticket){

    if (ticket->getCmd() == NULL) {
        std::cout << "Ticket Unhandled" << std::endl;
        return;
    }

    if (ticket->getCmd()->getType() == "Finance"){
        std::cout << "Finance Support is handling the ticket..." << std::endl;

        // TicketCommand* financeTicket = new FinanceCommand();
        // financeTicket->execute(ticket->getId(), ticket->getInfo());
        
        // delete financeTicket;

        ticket->getCmd()->execute(ticket->getId(), ticket->getInfo());

    } else {
        std::cout << "Finance Support is passing on the ticket..." << std::endl;

        Support::support(ticket);

    }
    

}