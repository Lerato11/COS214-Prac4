#ifndef DIRECTOR_H
#define DIRECTOR_H

// using namespace std;
// #include <iostream>
#include <string>
#include <vector>

#include "SystemMaker.h"
#include "TicketInformation.h"

#include "TicketSystem.h"
#include "TicketSystemMaker.h"
// #include "TicketCategory.h"
// #include "TicketLeaf.h"
// #include "FinanceCommand.h"
// #include "TechCommand.h"
// #include "GeneralCommand.h"

class Director
{

    private: 
        SystemMaker* maker;
        std::vector<TicketInformation*> financeTickets;
        std::vector<TicketInformation*> techTickets;
        std::vector<TicketInformation*> generalTickets;


    public:
        Director(SystemMaker* maker);

        std::vector<TicketInformation*> getFinanceTickets();
        std::vector<TicketInformation*> getTechTickets();
        std::vector<TicketInformation*> getGeneralTickets();

        void setFinanceTickets(std::vector<TicketInformation*> financeTickets);
        void setTechTickets(std::vector<TicketInformation*> techTickets);
        void setGeneralTickets(std::vector<TicketInformation*> generalTickets);

        TicketSystem* construct();
};


#endif