#include <iostream>
using namespace std;
class IndianCar
{
private:
    string ID = "IND01-";
public:
    void setID(string s)
    {
        ID = s;
    }
    string getID()
    {
        return ID;
    }
};
class BMW : protected IndianCar
{
    public:
    string ownID()
    {
        return getID()+"5090";
    }
};
class BMWS6 : public BMW
{
    public:
    void dis()
    {
        cout<<"This is the S6 Series";
    }
};
class Tata : protected IndianCar
{
    public:
    string ownID()
    {
        return getID()+"9010";
    }
};

int main()
{
    BMWS6 co;
    cout<<co.ownID();
    co.dis();
    Tata t;
    cout<<t.ownID();
}
