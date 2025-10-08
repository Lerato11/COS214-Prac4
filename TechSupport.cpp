#include "TechSupport.h"

#include "TechCommand.h"

TechSupport::TechSupport(){
    
}

void TechSupport::support(TicketLeaf* ticket){

    if (ticket->getCmd()->getType() == "Tech"){
        std::cout << "Tech Support is handling the ticket..." << std::endl;

        TicketCommand* techTicket = new TechCommand();
        techTicket->execute(ticket->getId(), ticket->getInfo());
        
        delete techTicket;

    } else {
        std::cout << "Tech Support is passing on the ticket..." << std::endl;

        Support::support(ticket);

    }
    

}