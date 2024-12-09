#include <iostream>
using namespace std;
class Demo
{
    public:
        Demo(){
            cout<<"Hello Costructor";
        }
        ~Demo(){
            cout<<"Hello Destructor";
        }
};
int main()
{
    Demo d;
}