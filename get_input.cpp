#include "get_input.h"
#include "helper.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>


class edit_file{
    public:
    std::string delimiter;
    


};





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
