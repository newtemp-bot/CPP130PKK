#include <iostream>
#include <string.h>
using namespace std;
class Students
{
    int id;
    string name;
    int total;

public:
    Students()
    {
        cout << "Simple Constructor called..";
    }
    Students(int i, string s, int t)
    {
        id = i;
        name = s;
        total = t;
    }
   /*  Students(Students& o)
    {
        id = o.id;
        name = o.name;
        total = o.total;
    } */
    void display()
    {
        cout << endl;
        cout << "Your ID = " << id;
        cout << "Your name is = " << name;
        cout << "Your Marks Total is = " << total;
        cout << endl;
    }
};
int main()
{
    Students std(10, "Ashok", 50);
    std.display();
    Students st(std);
    st.display();
}