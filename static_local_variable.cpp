/* a program to show the use and concept of static local variable 
in a Function:*/
#include<iostream>
using namespace std;
void add()
{
    static int c=0; /* When a variable is declared as static, space for it gets allocated for the lifetime of the program. Even if the function is called multiple times, space for the static variable is allocated only once and the value of variable in the previous call gets carried through the next function call. This is useful for implementing coroutines in C/C++ or any other application where previous state of function needs to be stored.*/
    int g=0;        /* here the variable C is declared as static and g is normal local variable and both are initialized with 0. So,C static variable value is carried through the function calls. The variable C is not getting initialized for every time the function is called while variable g is initalized with zero evey time the function add1() is called and its previous value gets changed.*/
    g++;
    c++;
    cout<<endl<<"c="<<c<<endl;
    cout<<endl<<"g="<<g<<endl;
}
int main()
{
    int i;
    for(i=0;i<5;i++)
    add();
    return 0;
}