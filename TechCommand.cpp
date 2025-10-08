#include "TechCommand.h"

TechCommand::TechCommand(){

}


void TechCommand::execute(std::string id, std::string info){
    
    std::cout << "Tech Issue: " << id << std::endl;
    std::cout << "Tech Information: " << info << std::endl;


}


std::string TechCommand::getType(){
    return "Tech";
}