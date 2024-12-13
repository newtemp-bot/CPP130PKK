#include <iostream>
using namespace std;
class Animals
{   
    public:
        void see()
        {
            cout<<"Animal Can See...";
        }
        void see(int a)//overloading
        {
            cout<<"Animal Can See..."<<a;
        }
        virtual void speak()
        {
            cout<<"Animal Animal";
        }
};
class Cat : public Animals
{
    public:
        void speak()
        {
            cout<<"mewo mewo";
        }
        //override
        void see()
        {
            cout<<"Cat Can See...";
        }
};
class Dog : public Animals
{
    public:
        void speak()
        {
            cout<<"Bow Bow";
        }
        void see()
        {
            cout<<"Dog Can See...";
        }
};

int main()
{
    Dog d;
    d.speak();
    d.see();
    Cat c;
    c.speak();
    c.see();
    Animals* a;
    a = &d;
    a->speak();
    Animals l;
    l.speak();
}