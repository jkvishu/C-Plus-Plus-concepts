/*Static functions in a class: VVVI IMPORTANT POINTS :-
 1.Just like the static data members or static variables inside the class
 static member functions also does not depend on object of class. 
 2.We are allowed to invoke a static member function using the object 
 and the ‘.’ operator but it is recommended to invoke the static members functions
 using the class name and the scope resolution operator.
 3.Static member functions are allowed to access only 
 the static data members or other static member functions, 
 they can not access the non-static data members or member functions of the class
 4.while non static i.e instance member function can access static variables 
 but not the static member functions .*/
//why we use static member functions?
//1.In condtion if the object of class is not Created we can call them without the objects
//2.and also if staic member variables are declared private we cannot access them directly by the objects so we need another instance member function(but here object is required to call it) or staic member functions(object is not required). 
// C++ program to demonstrate static
// member function in a class
#include<iostream>
using namespace std;
class GfG
{
    public:
    // declaring static member variable
    static int a; 
    public:
    // static member function are declared and defined in the class only
    static void printMsg()
    {
        cout<<a; //linker problem occur if this static member variable is not defined outside the class.
        cout<<"\n\nWelcome to GfG!\n";
    }
};
int GfG::a; //defining static member variable and if we dont define we can see the linker error.
// main function
int main()
{
    // invoking a static member function through class
    GfG::printMsg();
    //invoking a static member function through object of class
    GfG obj;
    obj.printMsg();//linker will not work if the satic member function is accesing the satic member variable and that static member variable is not defined outside the class.
    return 0;
}