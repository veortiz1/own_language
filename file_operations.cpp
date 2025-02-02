#include "file_operations.h"
#include <iostream>
#include <fstream>
using namespace std;



vector<string> create_file(){

    vector<string> each_line;
    ifstream file("file.csv");
    string line;
    while (getline(file, line)) {  
       each_line.push_back(line);
    }

    return each_line;
    

}

void update_file(vector <string> new_lines){
    ofstream outFile("file.csv", ios::trunc);
    

    for(int i=0;i<new_lines.size();i++){
        outFile << new_lines[i] << endl;
    }

    outFile.close();


}