#include "get_input.h"

#include <iostream>
#include <sstream>
#include <vector>
#include <string>


std::string manage_input(std::string input){

    std::vector <std::string> tokens;
    std::istringstream ss(input);
    std::string token;

   while (ss >> token) {
    tokens.push_back(token);
}



    

    return "yues";

    



}
