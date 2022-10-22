/*a program to understand the concept of inline function*/
#include<iostream>
using namespace std;
inline void call(); /*requesting compiler to make it as a inline function*/
void bapu();
int main()
{
    cout<<"hi there\n";
    bapu();
    bapu();
    bapu();
    return 0;
}
void call()
{
    cout<<"my name is vishu\n"; /*inline function defination*/
}
void bapu()
{
    call();
    call();
    call(); /*calling an inline function inside an another function so as to reduce the runtime*/
    call();
    cout<<"i am red hat coder\n";
}