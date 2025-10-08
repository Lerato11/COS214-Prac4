#ifndef TICKETCOMMAND_H
#define TICKETCOMMAND_H

#include <string>
#include <iostream>

class Support;

class TicketCommand {
    public: 
        TicketCommand();
        virtual void execute(std::string id, std::string info) = 0;
        virtual std::string getType() = 0;
};

#endif