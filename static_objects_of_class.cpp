/*Just like variables, objects also when declared as static have a scope till the lifetime of program*/
//a program to illustrate the same
#include<iostream>
using namespace std;
  
class GfG
{
    int i;
    public:
        GfG() //constructor for class GfG
        {
            i = 0;
            cout << "\nInside Constructor\n";
        }
        ~GfG() //Desctructor for class GfG
        {
            cout << "Inside Destructor\n";
        }
};
  
int main()
{
    int x = 0;
    if (x==0)
    {
        /* for GfG obj; 
        output was:Inside Constructor // the object is declared inside the if block as non-static. So, the scope of variable is inside the if block only. So when the object is created the constructor is invoked and soon as the control of if block gets over the destructor is invoked as the scope of object is inside the if block only where it is declared.
                   Inside Destructor
                   End of main
    but what if we decalre GfG object as static*/
      static GfG obj;  /*Output:
                       Inside Constructor
                       End of main
                       Inside Destructor*/ //We can clearly see the change in output. Now the destructor is invoked after the end of main. This happened because the scope of static object is through out the life time of program.
    }
    cout << "End of main\n";
}