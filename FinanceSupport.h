#ifndef FINANCESUPPORT_H
#define FINANCESUPPORT_H

// using namespace std;
#include <iostream>

#include "Support.h"

class FinanceSupport : public Support
{
private:

protected:
    void support(TicketLeaf* ticket);

public:
    FinanceSupport();
};


#endif