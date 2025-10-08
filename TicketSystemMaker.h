#ifndef TICKETSYSTEMMAKER_H
#define TICKETSYSTEMMAKER_H

// using namespace std;
// #include <iostream>
#include <string>
#include "SystemMaker.h"

#include "TicketSystem.h"
#include "TicketCategory.h"
#include "TicketLeaf.h"
#include "FinanceCommand.h"
#include "TechCommand.h"
#include "GeneralCommand.h"

class TicketSystemMaker : public SystemMaker
{

    private: 
        TicketSystem* root;
        TicketSystem* currentCategory;

    public:
        TicketSystemMaker();
        void reset();
        void addCategory(std::string name);
        void addFinanceTicket(std::string id, std::string info);
        void addTechTicket(std::string id, std::string info);
        void addGeneralTicket(std::string id, std::string info);
        TicketSystem* getTicketSystem();
};


#endif