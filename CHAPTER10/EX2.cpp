#include <iostream>
using namespace std;
inline double Max(double x,double y)
{
    if(x>y)
        return x;
    if(x<y)
        return y;
    if (x==y)
        return y;
}
inline char Max(char x,char y)
{
    if(x>y)
        return x;
    if(x<y)
        return y;
    if (x==y)
        return x;
}
int main()
{
    double x,y;
    char a,b;
    cout<<"Enter the value of X: \n";
    cin>>x;
    cout<<"Enter the value of Y: \n";
    cin>>y;
    cout<<Max(x,y)<<endl;
    cout<<"***********************\n\n";
    cout<<"Enter the first character: \n";
    cin>>a;
    cout<<"Enter the second character : \n";
    cin>>b;
    cout<<Max(a,b)<<endl;

    return 0;
}
