#include <iostream>
#include <string.h>
using namespace std;
class Demo
{
    int x, y;

public:
    Demo(int a, int b)
    {
        x = a;
        y = b;
    }
    operator float() const
    {
        return float(x)/float(y);
    }
    operator string() const
    {
        string str="one thousnd";
        return str;
    }
};
int main()
{
    Demo f(5,2);//1000
    float z = f;//z is sting = f inster a number and give word formate. 
    string s = f;
    cout << z;
    cout<<s;
}