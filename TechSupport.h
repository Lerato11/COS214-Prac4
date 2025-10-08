#ifndef TECHSUPPORT_H
#define TECHSUPPORT_H

// using namespace std;
#include <iostream>

#include "Support.h"

class TechSupport : public Support
{
    

public:
    TechSupport();
    void support(TicketLeaf* ticket);
};


#endif