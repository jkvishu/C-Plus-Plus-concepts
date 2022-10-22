#include<iostream>
#include"insert.h" // this headerfile is created by me in c++ basic concepts folder
using namespace std;
using namespace in; // this is namespace i have created in insert.h header file
int main()
{
    int c;
    insert(); //this is the one of the function i have created in "in" namespace which lies in insert.h header file
    c=a+b; // a and b are the variables which belong to "in" namespace
    cout<<"sum of two number you inserted is\n";
    cout<<c<<endl;
}