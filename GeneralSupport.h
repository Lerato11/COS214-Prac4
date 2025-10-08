#ifndef GENERALSUPPORT_H
#define GENERALSUPPORT_H

// using namespace std;
#include <iostream>

#include "Support.h"

class GeneralSupport : public Support
{
private:

protected:
    void support(TicketLeaf* ticket);

public:
    GeneralSupport();
};


#endif