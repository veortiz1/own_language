#include <string>

#include "helper.h"

std::string to_uppercase(std::string s){

std::string final_string;
    for(char c: s){
   final_string = final_string + static_cast<char>(std::toupper(c));

}

return final_string;

}
