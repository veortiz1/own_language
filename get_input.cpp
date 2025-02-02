#include "get_input.h"
#include "helper.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>
#include "file_operations.h"
using namespace std;

class MyFile
{
public:
    string delimiter;
    vector<string> file_lines;
    int delete_index;
    string delete_name;

    void set_delete_index(string column_name)
    {
        string header = file_lines[0];
        istringstream ss(header);
        string token;
        int counter = 0;
        while (getline(ss, token, ','))
        {
            if (token == column_name)
            {
                break;
            }
            counter = counter + 1;
        }
        delete_index = counter;
    }
    void delete_column()
    {
        vector<string> temp_file_lines;

        for (int i = 0; i < file_lines.size(); i++)
        {
            string row = file_lines[i];
            istringstream ss(row);
            string token;
            int counter = 0;
            string temp_line="";
            while (getline(ss, token, ','))
            {
                if (counter == delete_index)
                {
                   
                }
                else
                {
                    temp_line = temp_line + token + ",";
                }

                counter = counter + 1;
            }
            temp_line.pop_back();
            temp_file_lines.push_back(temp_line);
        }
        file_lines=temp_file_lines;
    }
    void print_file()
    {
        for (int i = 0; i < file_lines.size(); i++)
        {
            cout << file_lines[i];
            cout << "\n";
        }
    }
};

string manage_input(string input)
{

    MyFile my_csv;
    my_csv.file_lines = create_file();
    my_csv.delimiter = ",";

    vector<string> tokens;
    istringstream ss(input);
    string token;

    while (ss >> token)
    {
        tokens.push_back(token);
    }

    string method = to_uppercase(tokens[0]);

    if (method == "DELETE")
    {
        string row_or_column = to_uppercase(tokens[1]);
        if (row_or_column == "COLUMN")
        {
            my_csv.set_delete_index(tokens[2]);
            my_csv.delete_column();
            my_csv.print_file();
            update_file(my_csv.file_lines);
        }
    }

    return "yues";
}