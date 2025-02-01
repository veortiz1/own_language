#include <string>
#include <iostream>

#include "get_input.h"



int main(){
    int exit=0;

   while(exit==0){
    std::string user_text="";

    std::cout<<"\nWhat do you want to do? \n";
    std::getline(std::cin, user_text);

    std::cout<<"\n"+user_text;

    manage_input(user_text);




   }

}
