#include "FinanceCommand.h"

FinanceCommand::FinanceCommand(){

}


void FinanceCommand::execute(std::string id, std::string info){
    
    std::cout << "Finance Code: " << id << std::endl;
    std::cout << "Finance Information: " << info << std::endl;


}


std::string FinanceCommand::getType(){
    return "Finance";
}