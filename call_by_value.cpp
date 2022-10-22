/*a program to learn the concept of call by value in a function by adding two different numbers*/
#include<iostream>
using namespace std;
int add(int,int);
int main()
{
    int a,b,c;
    cout<<"enter the values\n";
    cin>>a>>b;
    c=add(a,b); /*actual arguments*//*ordinary or normal variable*/
    cout<<"the sum of two numbers is\n";
    cout<<c;
    return 0;
}
int add(int x,int y) /*formal arguments*/
{
    int d;
    d=x+y;
    return(d);  /*takes something return something*/
}