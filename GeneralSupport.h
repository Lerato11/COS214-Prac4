#ifndef GENERALSUPPORT_H
#define GENERALSUPPORT_H

// using namespace std;
#include <iostream>

#include "Support.h"

class GeneralSupport : public Support
{

public:
    GeneralSupport();
    void support(TicketLeaf* ticket);
};


#endif