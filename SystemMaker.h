#ifndef SYSTEMMAKER_H
#define SYSTEMMAKER_H

// using namespace std;
// #include <iostream>
#include <string>
// #include "Support.h"
#include "TicketSystem.h"

class SystemMaker
{

public:

    virtual ~SystemMaker();

    virtual void reset() = 0;
    virtual void addCategory(std::string name) = 0;
    virtual void addFinanceTicket(std::string id, std::string info) =0;
    virtual void addTechTicket(std::string id, std::string info) =0;
    virtual void addGeneralTicket(std::string id, std::string info) =0;
    virtual TicketSystem* getTicketSystem() = 0;
    
};


#endif