/*Static variables in a class or Static member variable.
As the variables declared as static are initialized only once
as they are allocated space in separate static storage 
so, the static variables in a class are shared by the objects. 
There can not be multiple copies of same static variables for different objects. i.e obj1.i,obj2.i is not possible 
Also because of this reason static variables can not be initialized using constructors.*/
// C++ program to demonstrate static
// variables inside a class

// it very very important to define static member variables outside the class so that we can use them through static member function
#include<iostream>
using namespace std;
  
class GfG
{
   public:
     static int i; //declaration of static member variable is done inside the class
                   //while initialization should be done explicitly by the user using the class name and scope resolution operator outside the class as shown below
     GfG()
     {
        // Do nothing
     };
};
int GfG::i=1; 
int main()
{               // we cannot change values of staic varaible by calling them directly through objects because they are not the part of objects instead their are independent.
  GfG obj1,obj2;  
  // prints value of i with one object;
  cout << obj1.i<<endl;
  GfG::i=2; //Another way of accesing the static member variable in main function iff the static member variable is decalred public and if declared private than we have to use a public static member function to access them.
  cout<<obj2.i<<endl; // prints value of i with second object;
  return 0;         //if GfG::i=2; is not done than i is shared commonly by each objects and both objects will access i commonly and print i=1 value only;
}
