#include "TechSupport.h"

#include "TechCommand.h"

TechSupport::TechSupport(){
    
}

void TechSupport::support(TicketLeaf* ticket){

    if (ticket->getCmd() == NULL) {
        std::cout << "Ticket Unhandled" << std::endl;
        return;
    }

    if (ticket->getCmd()->getType() == "Tech"){
        std::cout << "Tech Support is handling the ticket..." << std::endl;

        // TicketCommand* techTicket = new TechCommand();
        // techTicket->execute(ticket->getId(), ticket->getInfo());
        
        // delete techTicket;

        ticket->getCmd()->execute(ticket->getId(), ticket->getInfo());

    } else {
        std::cout << "Tech Support is passing on the ticket..." << std::endl;

        Support::support(ticket);

    }
    

}