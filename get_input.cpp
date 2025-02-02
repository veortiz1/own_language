#include "get_input.h"
#include "helper.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <string>



void delete_function(std::vector <std::string> tokens){
    std::cout<<"in delete function!";
    std::string token_1=to_uppercase(tokens[1]);
    std::string token_2=tokens[2];

    

    if(token_1=="COLUMN"){
        std::cout<<"column!!!!";
        
    }
    else{
        std::cout<<"nahhhj";
    }
    



}


std::string manage_input(std::string input){
    std::cout<<"hello!";

    std::vector <std::string> tokens;
    std::istringstream ss(input);
    std::string token;

   while (ss >> token) {
    tokens.push_back(token);
}


std::string method=to_uppercase(tokens[0]);

if(method=="DELETE"){
    delete_function(tokens);
}






    

    return "yues";

    



}
