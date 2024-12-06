#include <iostream>
using namespace std;
class Car
{
    protected:
    Car()
    {
        cout<<"First Called...";
    } 
public:
    ~Car()
    {
        cout<<"hello Destructor";
    }
    Car(int x)
    {
        cout<<"Hello";
    }
};
class BMW : public Car
{

};

int main()
{
    Car obj(50);
    BMW o;
}
