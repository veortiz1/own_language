#include "get_input.h"
#include "helper.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>



void delete_function(std::vector <std::string> tokens){
    std::cout<<"in delete function!";
    std::string token_1=to_uppercase(tokens[1]);
    std::string token_2=tokens[2];

    

    if(token_1=="COLUMN"){
        std::cout<<"column!!!!";

        std::ifstream  data("file.csv");
         std::string line;
         int row=0;
         int colum_number;
         std::vector<std::vector<std::string>> new_csv;
    while(std::getline(data,line))
    {
        std::stringstream  lineStream(line);
        std::string        cell;
         int counter=0;
         std::vector <std::string> updated_row;
        while(std::getline(lineStream,cell,','))
        {
           
         if(row==0){
            if(cell==tokens[2]){
              colum_number=counter;
              break;
            }
         }
         else{
            if (counter==colum_number){
                std::cout<<cell;
            }
            else{
             updated_row.push_back(cell);
            }
         }
         counter=counter+1;
        }
        row=row+1;
    }
        
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
