#include "GeneralSupport.h"

#include "GeneralCommand.h"

GeneralSupport::GeneralSupport(){
    
}

void GeneralSupport::support(TicketLeaf* ticket){

    if (ticket->getCmd() == NULL) {
        std::cout << "Ticket Unhandled" << std::endl;
        return;
    }


    if (ticket->getCmd()->getType() == "General"){
        std::cout << "General Support is handling the ticket..." << std::endl;

        // TicketCommand* generalTicket = new GeneralCommand();
        // generalTicket->execute(ticket->getId(), ticket->getInfo());
        
        // delete generalTicket;

        ticket->getCmd()->execute(ticket->getId(), ticket->getInfo());

    } else {
        std::cout << "General Support is passing on the ticket..." << std::endl;

        Support::support(ticket);

    }
    

}