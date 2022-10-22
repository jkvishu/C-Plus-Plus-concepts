/* a program to make understanding of using functions,declaring them,defining them,calling them */
#include<iostream>
using namespace std;
void fun(); /* declaration of a function is necesary when it is defined after the main function*/
void fun2() /*if the function was directly defined before the main function than no declration is necessary*/
{
    cout<<"i am real gamer\n";
}
int main()  
{
  cout<<"hello\n";
  fun2(); 
  fun();                    
return 0;
}
void fun()
  {
      cout<<"you are in main\n";
  }
