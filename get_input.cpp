#include "get_input.h"
#include "helper.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>
#include "file_operations.h"

using namespace std;

class MyFile {
public:
    string delimiter;
    vector<string> file_lines;
    int delete_index;
    string delete_name;
};

string manage_input(string input) {
   

    MyFile my_csv;
      my_csv.file_lines=create_file();

    vector<string> tokens;
    istringstream ss(input);
    string token;

    while (ss >> token) {
        tokens.push_back(token);
    }

    string method = to_uppercase(tokens[0]);
     

    if (method == "DELETE") {
        string row_or_column=to_uppercase(tokens[1]);
      if(row_or_column=="COLUMN"){

      }
    }

    return "yues";
}