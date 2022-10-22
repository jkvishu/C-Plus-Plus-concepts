/*Template is a keyword in c++ used to define function and class template
  it is a way to make functions and class generalize as far as data type is concern
  NOTE:- The main purpose of using template in our program is to achieve generalization
   of the function so as to avoid function overloading */
#include<iostream>
using namespace std;
template<class A>// here also we can write the same line A add(A x,A y) no problem.
A add(A x,A y)
{                                // Now we have avoided function overloading by using generalized way of templates
    A c; // Created a single function for the addition of two different types of values one is integer and another is decimal value.
    c=x+y;
    return c; // Type of A depends on the type of actual argument is passed. and this is the feature which template provide us.Which says that the place holder A (or any name) is replaced by the data type depending on the user need.
}
int main()
{
    int g,h,v;
    float j,a,b,c;
    cout<<"Enter any two integer number\n";
    cin>>g;
    cout<<"g = "<<g<<endl;
    cin>>h;
    cout<<"h = "<<h<<endl;
    cin>>j;
    cout<< "j variable of float type will be Containg the carried decimal value if a float value  is inputed by the user in an integer variable say h\n"<<"j = "<<j<<endl;
    cout<<"Enter two decimal value\n"; // noticed an unusual behaviour when i inputed first an integer value and than another decimal value when asked for inputing interger values only. 
    cin>>a;                     // Actually it carries the value after the decimal as it take it as overflow and automatically on its own check whether the next varibale inputing values from user by using cin object is capable of holding a decimal value or not,if capable than the value is inserted by ignoring the command that is it already carrying a false bit which can be stored in another varaible used by cin object for the user to input value in that variable and if not capable than the program is terminated or crashed and no further instructions are executed. we can see the program crashing or terminating when a decimal value is inserted in the very first integer varaible but the carry decimal value is seen when we input a decimal value in second integer varaible. the reason is told in this line earlier and we have known it.
    cout<<"a = "<<a<<endl;  
    cin>>b;
    cout<<"b = "<<b<<endl;
    v=add(g,h);
    cout<<"Sum of two integer number is = "<<v<<endl;
    c=add(a,b);
    cout<<"Sum of two decimal number is = "<<c<<endl;
    return 0;
}