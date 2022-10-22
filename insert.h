#include<iostream>
namespace input //namespace is a keyword and input is the name of namespace i have created
{
    int a,b;
    void insert();
    int add();
    int multiply();
}
namespace in = input; // creating alias of my namespace
using namespace std;
void in::insert() //this is how we can define the function of namespace (learn this concept from article 1 )
{
    std::cout<<"Enter two integer numbers\n";
    std::cin>>a>>b;
    std::cout<<"Your values are inserted in varaibles named as a and b in this way\n";
    std::cout<<"a= "<<a<<endl;
    std::cout<<"b= "<<b<<endl;
}
int in::add()
{
    return (a+b);
}
int in::multiply()
{
    return (a*b);
}
