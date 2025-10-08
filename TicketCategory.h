#ifndef TICKETCATEGORY_H
#define TICKETCATEGORY_H

#include <string>
// #include <iostream>
#include <vector> 


#include "TicketSystem.h"


class TicketCategory: public TicketSystem {
    private:
        std::string name;
        std::vector<TicketSystem*> children;


    public: 
        TicketCategory(std::string name);
        ~TicketCategory();
        std::string getName();
        void setName(std::string name);
        void add(TicketSystem* item);
        void print();
};

#endif