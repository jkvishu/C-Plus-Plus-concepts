// A sample program to show dyanmic constructor
/*When allocation of memory is done dynamically using dynamic
 memory allocator new in a constructor, it is known as dynamic 
 constructor. By using this, we can dynamically initialize the objects.
 int *p=new int; this line means that a pointer p of int data type is created which will hold
 address  of int type variable or will point to a memory location of 4 byte and new will create a int type block of memory inside the heap memory and return its address to the p pointer varaible 
 */
#include<iostream>
using namespace std;
class car
{
    int a,b;
    int *p;
    public:
    car()
    {
        a=0;
        b=0;  // dynamic constructor
        p=new int;   // allocating memory in heap memory using dynamic allocator new
    }
    void insert(int i,int j)
    {
        a=i;
        b=j;
        *p=a+b;
    }
    void show()
    {
        cout<<"The sum of two integer values is\n";
        cout<<"*p= "<<*p<<endl;
    }
    ~car()
    {
        delete p; //remember The thing is to be noted here, if the object is created by using new or the constructor uses new to allocate memory which resides in the heap memory or the free store, the destructor should use delete to free the memory.   
    }
};
int main()
{
    int i,j;
    system("clear");
    cout<<"Enter two integer numbers\n";
    cin>>i>>j;
    car c1;
    c1.insert(i,j);
    c1.show();
}