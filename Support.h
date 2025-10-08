#ifndef SUPPORT_H
#define SUPPORT_H

// using namespace std;
#include <iostream>

#include "TicketLeaf.h"

class TicketCommand;

class Support
{
protected:
    Support* next;

public:
    Support();
    virtual ~Support();
    void setNext(Support* next);
    virtual void support(TicketLeaf* ticket);

};


#endif