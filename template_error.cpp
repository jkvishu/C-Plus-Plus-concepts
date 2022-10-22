// error is about or due to failure of implicit type conversion or casting.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    float d;
    cout<<"Enter any two value\n";
    cin>>a>>b;
    d=float(a)/float(b);
    cout<<"d = "<<d<<endl;
}