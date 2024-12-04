#include <iostream>
using namespace std;
class A{
    int a;
    int b;
    public:
    void sum(int x,int y)
    {
        a = x;
        b = y;
        cout<<"Sum = "<<a+b;
    }
    void dis()
    {
        cout<<" A = "<<a<<" B = "<<b;
    }
};
class Car{
    int id = 34541;
    public:
    void change()
    {
        cout<<id+25;
    }
};
int main()
{
    Car o;
    o.change();
    cout<<"hello ";
    A obj,obj2;
    obj.sum(10,20);
    obj.dis();
    obj2.sum(50,60);
    obj2.dis();
    cerr<<"Hello";
}
