#ifndef TICKETINFORMATION_H
#define TICKETINFORMATION_H

#include <string>


class TicketInformation {
    private: 
        std::string info;
        std::string id;

    public:
        TicketInformation();
        TicketInformation(std::string id, std::string info);
        void setId(std::string id);
        void setInfo(std::string info);
        std::string getId();
        std::string getInfo();
};



#endif
