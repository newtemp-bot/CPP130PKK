#include <iostream>
using namespace std;
class Car
{
    int x;
public:
    Car(int x){
        this->x=x;
    }
    void run();
    friend void info(Car&);
};
void info()
{
    cout<<"This is the info about car and onther car.";
}
void info(Car& xyz)//xyz = c
{
    cout<<"OBject x = "<<xyz.x;
}
int main()
{
    Car c(50);
    c.run();
    info(c);
}

void Car :: run()//member function
{
    cout<<"Hello Running Car...";
}

