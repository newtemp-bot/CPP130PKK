// C++ program to demonstate the use of try,catch and throw
// in exception handling.

#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{

    /* int n,v;
    cout<<"Enter Your Number = ";
    cin>>n;
    cout<<"Enter Your Number = ";
    cin>>v;
    
    int i = n/v;
    cout<<i; */
cout<<"Code Start...";
    
    // try block
    try {
        int numerator = 10;
        int denominator = 0;
        int res;
        //throw 10;
        // check if denominator is 0 then throw runtime
        // error.
        if (denominator == 0) {
            //throw runtime_error("Division by zero not allowed!");
            throw runtime_error("tetmm");
        }

        // calculate result if no exception occurs
        res = numerator / denominator;
        //[printing result after division
        cout << "Result after division: " << res << endl;
    }
    catch(int x)
    {
        cout<<x;
    }
    // catch block to catch the thrown exception
    /* catch (const exception& e) {
        // print the exception
        cout << "Exception " << e.what() << endl;
    } */
    catch(...)
    {
        cout<<"Something went wrong";
    }


    cout<<"Code Ended...";
    return 0;
}