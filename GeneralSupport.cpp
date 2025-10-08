#include "GeneralSupport.h"

#include "GeneralCommand.h"

GeneralSupport::GeneralSupport(){
    
}

void GeneralSupport::support(TicketLeaf* ticket){

    if (ticket->getCmd()->getType() == "General"){
        std::cout << "General Support is handling the ticket..." << std::endl;

        TicketCommand* generalTicket = new GeneralCommand();
        generalTicket->execute(ticket->getId(), ticket->getInfo());
        
        delete generalTicket;

    } else {
        std::cout << "General Support is passing on the ticket..." << std::endl;

        Support::support(ticket);

    }
    

}