/*a program to understand the basic concept of pointer */
/*it is very important to write code in line segement giving space before lines after creating main function*/
#include<iostream>
using namespace std;
int main()
{
   int a,*p;
   cout<<"enter a value\n";
   cin>>a;
   p=&a;
   cout<<"the value you inserted\t"<<a<<endl;
   cout<<"the address of the variable where your value is stored\n";
   cout<<p<<endl;
   cout<<"the value  "<<*p<<" is stored at this address  "<<p<<endl;
   return 0;
}