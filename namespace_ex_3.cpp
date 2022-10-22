#include<iostream> //-->>Enclosing the header file name within angular brackets "< ...>"" signifies that the header file is located in the standard folder of all other header files of C/C++
#include"insert.h" //-->> Enclosing the header file name within double quotes signifies that the header file of C and C++ is located in the present folder you are working with. It is a preferred practice to include user-defined header files in this manner.
using namespace in; // we can also use namespace "input" as "in" is its alias
int main()
{
    int c,d;
    system("clear");
    insert();
    // d=give5(); see we cannot use the features we have added to our namespace in a particular cpp file. as it is than limited to that  file only.
    c=add(); 
    d=multiply();
    std::cout<<"The sum of two number you inserted is\n";
    std::cout<<c<<endl;
    std::cout<<"The product of two number you inserted is\n";
    std::cout<<d<<endl;
    return 0;
}
