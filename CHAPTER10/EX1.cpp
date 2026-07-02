#include <iostream>
#include <random> // To generate random numbers
#include <ctime> // To change the numbers in each run
using namespace std;
long sum(long a, long b, long c=0, long d=0)
{

    return a+b+c+d;
}
int main()
{
    srand(time(0));
    long a=rand();
    long b=rand();
    long c=rand();
    long d=rand();
    cout<<a<<"+"<<b<<"+"<<c<<"+"<<d<<endl;
    cout<<sum(a,b,c,d)<<endl;
    cout<<sum(a,b,c)<<endl;
    cout<<sum(a,b)<<endl;

    return 0;
}
