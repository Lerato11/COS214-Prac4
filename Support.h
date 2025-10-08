#ifndef SUPPORT_H
#define SUPPORT_H

// using namespace std;
#include <iostream>

#include "TicketLeaf.h"

class TicketCommand;

class Support
{
private:
    Support* next;

protected:
    virtual void support(TicketLeaf* ticket);

public:
    Support();
    ~Support();
    void setNext(Support* next);
};


#endif