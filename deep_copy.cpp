/* A program to demonstrate the concept of deep copy */
#include<iostream>
using namespace std;
class complex 
{
   int a,b,*p;
   public:
   complex()
   {
       cout<<"constructor is called\n";
       a=0;
       b=0;
       p=new int;
   }
   void insert(int i,int k)
   {
       a=i;
       b=k;
   }
   void show()
   {
       *p=a+b;
       cout<<"sum of two numbers that you inserted for 1 obj is\n";
       cout<<*p<<endl;
   }
   void show1()
   {
       cout<<"*p has = "<<*p<<"value\n";
       *p=a*b;
       cout<<"product of two numbers that you inserted for 1 obj is shown by the 2 object and i.e\n";
       cout<<*p<<endl;
   }
   complex(complex &c)
   {
       cout<<"copy constructor is called\n";
       a=c.a;
       b=c.b;
       cout<<"a= "<<a<<endl;
       cout<<"b= "<<b<<endl;
       p=new int;
   }
   ~complex()
   {
       cout<<"Destructor is called\n";
       delete p;
   }
};
int main()
{
    int a,b;
    system("clear");
    cout<<"Enter two integer numbers\n";
    cin>>a>>b;
    complex c1;
    c1.insert(a,b);
    cout<<"Data of the 1 object is\n";
    c1.show();
    complex c2=c1;
    cout<<"Data of the 2 object is\n";
    c2.show1();
    /* i was doing a mistake that is i was creating the objects of the class in this way
    complex c1,c2;
    c2=complex(c1); here we can see that 2 constructors (normal and copy) are working for c2 object and 2 int type of blocks are created when i use p=new int; in both constructor therefore their address need to be stored in 
    a pointer varaible so as to access them and their is a single pointer variable so that's a genuion reason for an error
    BUT , the doubt arries when i create a single block in normal constructor by using p=new int; and it is stored in the pointer variable of c2 object. but than also my program is crashing. and it should not becauase each object now has its own copy.*/
}
