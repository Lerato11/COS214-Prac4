#ifndef TICKESYSTEM_H
#define TICKESYSTEM_H

// #include <string>
#include <iostream>


class TicketSystem {
    public: 
        TicketSystem();
        virtual ~TicketSystem();
        virtual void print() = 0;
        virtual void add(TicketSystem* item) = 0;
};

#endif