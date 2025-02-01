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


std::string method;
for(char c: tokens[0]){
   method = method + static_cast<char>(std::toupper(c));

}

if(method=="DELETE"){
    std::cout<<"delete!!!!";
}





    

    return "yues";

    



}
