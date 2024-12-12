#include <iostream>
using namespace std;

struct test
{
    public:
        int x;
        void dis()
        {
            cout<<endl<<"Your X Value is = "<<x;
        }
};


class Demo
{
    public:
        int x;
        static int bal;
        static double salary;
        Demo()
        {}
        Demo(int x){
            this->x = x;
        }
        void dis()
        {
            cout<<endl<<"Your X Value is = "<<x;
            cout<<endl<<"Your bal Value is = "<<bal;
            cout<<endl<<"Your salary Value is = "<<salary;
        }
};

int Demo::bal=100;//Mandatory if you use class
double Demo::salary=25000.24;//Mandatory if you use class

int main()
{
    Demo d1(50), d2(60);
    d1.dis();
    d1.bal = 150;
    d1.dis();
    d2.dis();
    struct test t;
    t.dis();
    
}