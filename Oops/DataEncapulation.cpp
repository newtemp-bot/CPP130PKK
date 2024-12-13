#include <iostream>
using namespace std;
class Emp
{  
    int id;
    string pass;
    public:
        void setId(int id)
        {
            this->id=id;
        }
        int getId()
        {
            return id;
        }
        void setPass(string pass)
        {
            this->pass=pass;
        }
        string getPass()
        {
            return pass;
        }
};
int main()
{
    int id;
    string pass;
    Emp e;
    cout<<"Enter Your ID = ";
    cin>>id;
    cout<<"Enter Your Pass = ";
    cin>>pass;

    e.setId(id);
    e.setPass(pass);
    
    cout<<endl<<e.getId();
    cout<<endl<<e.getPass();
}