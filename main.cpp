#include <iostream>
#include "Director.h"
#include "TicketSystemMaker.h"
#include "TicketInformation.h"

int main() {
    //create concrete builder
    TicketSystemMaker* maker = new TicketSystemMaker();

    //create the Director and give it builder
    Director director(maker);

    // sample tickets
    std::vector<TicketInformation*> financeTickets = {
        new TicketInformation("F001", "Finance ticket: Salary issue"),
        new TicketInformation("F002", "Finance ticket: Budget approval")
    };

    std::vector<TicketInformation*> techTickets = {
        new TicketInformation("T001", "Tech ticket: Server down"),
        new TicketInformation("T002", "Tech ticket: Update system drivers")
    };

    std::vector<TicketInformation*> generalTickets = {
        new TicketInformation("G001", "General ticket: Office lighting"),
        new TicketInformation("G002", "General ticket: Coffee machine broken")
    };

    // Pass tickets to  Director
    director.setFinanceTickets(financeTickets);
    director.setTechTickets(techTickets);
    director.setGeneralTickets(generalTickets);

    TicketSystem* system = director.construct();

    std::cout << "Ticket System successfully built!" << std::endl;


    // Cleanup
    delete maker;
    delete system;
    for (auto t : financeTickets) delete t;
    for (auto t : techTickets) delete t;
    for (auto t : generalTickets) delete t;

    return 0;
}
