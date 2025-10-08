#ifndef SYSTEMMAKER_H
#define SYSTEMMAKER_H

// using namespace std;
// #include <iostream>
#include <string>
// #include "Support.h"

class SystemMaker
{

public:
    virtual void reset();
    virtual void addCategory(std::string name);
    virtual void addFinanceTicket(std::string id, std::string info);
    virtual void addTechTicket(std::string id, std::string info);
    virtual void addGeneralTicket(std::string id, std::string info);
    
};


#endif