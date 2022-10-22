/*a program to understand the concept of call_by_reference*/
#include<iostream>
using namespace std;
int subtract(int &,int &); /*declaration of reference type of parameter*/
int main()
{
    int a,b,c;
    cout<<"enter two values\n";
    cin>>a>>b;
    c=subtract(a,b); /*actual argument*/
    cout<<"the difference btw two number is\n";
    cout<<c;
    return 0;
}
int subtract(int &x,int &y) /*formal argument of reference type*/
{
    return(x-y);
}
