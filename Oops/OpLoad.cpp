#include <iostream>
#include <string.h>
using namespace std;
class Students//su1
{
    int s1, s2, s3, s1t, s2t, s3t;

public:
    Students()
    {

    }
    Students(int x, int y, int z)
    {
        s1 = x;
        s2 = y;
        s3 = z;
    }
    Students operator+(Students& o)//o = su2
    {
        Students tempsumSu;
        tempsumSu.s1t = s1 + o.s1;
        tempsumSu.s2t = s2 + o.s2;
        tempsumSu.s3t = s3 + o.s3;
        return tempsumSu;
    }
    void disTotalOfAllStdSubjectWise()
    {
        cout << "S1 Total = " << s1t;
        cout << "S2 Total = " << s2t;
        cout << "S3 Total = " << s3t;
    }
    void dis()
    {
        cout << endl;
        cout << endl;
        cout << "S1 = " << s1;
        cout << "S2 = " << s2;
        cout << "S3 = " << s3;
        cout << endl;
        cout << endl;
    }
};
int main()
{
    Students su1(10, 10, 10), su2(20, 30, 40);
    Students sum;
    sum = su1 + su2;
    sum.dis();
    sum.disTotalOfAllStdSubjectWise();
}