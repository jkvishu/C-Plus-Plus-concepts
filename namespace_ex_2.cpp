#include<iostream>
#include"insert.h"
using namespace std; // using is a keyword directive we use it so as to import the whole namespace into our program with global scope.
using namespace in;
namespace input // redifining the namespace "input" or "in" with some extra features.but it is limited to this program only. this cannot be used in another program.
{
    int give5()
    {
        return 5;
    }
}
int main()
{
    int c,d;
    insert();
    d=in::give5();
    c=a+b;
    d=d*c;
    cout<<"The sum of two integer you inserted is\n";
    cout<<c<<endl;
    cout<<"multiplying the sum with 5 we get\n";
    cout<<d<<endl;
}