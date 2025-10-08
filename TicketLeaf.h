#ifndef TICKETLEAF_H
#define TICKETLEAF_H


// using namespace std;
// #include <string>

#include "TicketSystem.h"
#include "TicketCommand.h"

class TicketLeaf : public TicketSystem
{
private:
    std::string id;
    std::string info;
    TicketCommand* cmd;

public:
    TicketLeaf(std::string id, std::string info);
    ~TicketLeaf();
    std::string getId();
    std::string getInfo();
    TicketCommand* getCmd();
    void setCmd(TicketCommand*);

    void add(TicketSystem*); // <<-- stub
    
    void print();
};


#endif