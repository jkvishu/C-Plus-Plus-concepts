/* A sample program to see whether automatically i.e implicit type conversion works or not
and also to see that how explicit type conversion or type casting works
NOTE:- It is possible for implicit conversions to lose information, 
signs can be lost (when signed is implicitly converted to unsigned), 
and overflow can occur (when long long is implicitly converted to float).*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,q;
    float c,d;
    char ch;
    system("clear");
    cout<<"Enter a character\n";
    cin.get(ch);
    cout<<"Enter two integer number \n";
    cin>>a>>b;
                   //c=(a/b);  here we can see that automatic type conversion is not working properly if we input 1 and 2 as integer it shows the left part of decimal value by ignoring the right side of the decimal this shows that implicit type conversion is not working.
    c=(float)a/b; // this solves the above problem by doing explicit type conversion
    q=a+ch;
    d=(int)c+1;
    cout<<"c= "<<c<<endl;
    cout<<"q= "<<q<<endl;
    cout<<"d= "<<d<<endl;
    return 0;
}