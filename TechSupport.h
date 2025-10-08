#ifndef TECHSUPPORT_H
#define TECHSUPPORT_H

// using namespace std;
#include <iostream>

#include "Support.h"

class TechSupport : public Support
{
private:

protected:
    void support(TicketLeaf* ticket);

public:
    TechSupport();
};


#endif