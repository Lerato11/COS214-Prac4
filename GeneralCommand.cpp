#include "GeneralCommand.h"

GeneralCommand::GeneralCommand(){

}


void GeneralCommand::execute(std::string id, std::string info){
    
    std::cout << "General Number: " << id << std::endl;
    std::cout << "General Information: " << info << std::endl;


}


std::string GeneralCommand::getType(){
    return "General";
}