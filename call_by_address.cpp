/*a program to understand the basic concept of call by address by multiplying two numbers*/
#include<iostream>
using namespace std;
int multiply(int *,int *);
int main()
{
    int a,b,c;
    cout<<"enter two values\n";
    cin>>a>>b;
    c=multiply(&a,&b);
    cout<<"the product of two numbers is\n";
    cout<<c<<endl;
    return 0;
}
int multiply(int *p,int *z)
{
    return(*p**z); /* i was not able to do the same work if i create another pointer variable to store the product of p and z and return it*/
}