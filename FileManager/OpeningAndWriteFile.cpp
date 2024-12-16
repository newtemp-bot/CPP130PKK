#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    /* ofstream fout;
    string str;
    fout.open("Demo.txt",ios::ate | ios::app);
    while (fout)
    {
        getline(cin,str);
        if (str == "-1")
            break;
        fout << str << endl;
    } */
    // Creation of ofstream class object
    ofstream fout;

    string line;

    // by default ios::out mode, automatically deletes
    // the content of file. To append the content, open in ios:app
    // fout.open("sample.txt", ios::app)
    fout.open("sample.txt",ios::app);

    // Execute a loop If file successfully opened
    while (fout) {

        // Read a Line from standard input
        getline(cin, line);

        // Press -1 to exit
        if (line == "-1")
            break;

        // Write line in file
        fout << line << endl;
    }

    // Close the File
    fout.close();
}