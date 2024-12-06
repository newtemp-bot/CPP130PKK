#include <iostream>
using namespace std;
int main()
{
    int n = 153,sum=0;
    int temp = n,temp2 = n,len=0;
    while (temp2>0)
    {
        temp2 = temp2 / 10;
        len++;
    }
    while (n>0)
    {
        int rem = n % 10;
        int tn = 1;
        for (size_t i = 0; i < len; i++)
        {
            tn*=rem;
        }
        sum += tn;
        n = n / 10;
    }
    if (temp == sum)
    {
        cout<<"Yes Arm";
    }
    else
    {
        cout<<"Not";
    }
    
    
}