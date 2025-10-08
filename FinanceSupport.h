#ifndef FINANCESUPPORT_H
#define FINANCESUPPORT_H

// using namespace std;
#include <iostream>

#include "Support.h"

class FinanceSupport : public Support
{    

public:
    FinanceSupport();
    void support(TicketLeaf* ticket);
};


#endif