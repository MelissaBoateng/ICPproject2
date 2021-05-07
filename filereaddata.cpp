#include <iostream>  //this file reads the data and stores them into an array
#include <fstream> // To use ifstream
#include <vector>
using namespace std;

int main()
{
    std::string Filename = "datablock.dat";
    std::ifstream input(Filename, std::ios::binary | ios::in);  // Open the file
    std::string line;                                           //  variable
    std::vector<std::string> lines;                             // Vector for holding all lines in the file
    while (std::getline(input, line))                           // Read lines as long as the file is
    {
       lines.push_back(line);                                   // Save the line in the vector
    }

    for(auto s : lines)                                         // For each line in vector
    {
        cout << s;                                              // Print it
        
        cout << endl;                                           // new line
    }
    return 0;
}

