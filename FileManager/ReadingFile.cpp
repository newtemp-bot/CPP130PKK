#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string str;
    // Creation of ifstream class object to read the file
    ifstream fin;

    // by default open mode = ios::in mode
    fin.open("sample.txt");
    // Check if the file opened successfully
    if (!fin)
    {
        // Print an error message if the file couldn't be
        // opened
        cerr << "Error!" << endl;
        // Return 1 to indicate failure
        return 1;
    }
    if (!fin.is_open())
    {
        // Print an error message if the file couldn't be
        // opened
        cerr << "Error opening file!" << endl;
        // Return 1 to indicate failure
        return 1;
    }

    // Execute a loop until EOF (End of File)
    while (getline(fin, str))
    {

        // Print line (read from file) in Console
        cout << str << endl;
    }

    // Close the file
    fin.close();

    return 0;
}