/*Destructor is an instance member function which is invoked automatically 
whenever an object is going to be destroyed. 
Meaning, a destructor is the last function 
that is going to be called before an object is destroyed.
The thing is to be noted here, 
if the object is created by using new or the constructor uses new 
to allocate memory which resides in the heap memory or the free store, 
the destructor should use delete to free the memory. */ 
/*If we do not write our own destructor in class, 
compiler creates a default destructor for us. 
The default destructor works fine unless we have dynamically allocated memory 
or pointer in class. 
When a class contains a pointer to memory allocated in class, 
we should write a destructor to release memory before the class instance is destroyed. 
This must be done to avoid memory leak.*/
#include<iostream>
using namespace std;
class complex 
{
    int a,b;
    public:
    complex() //it is compulsory to make default constructor if no argument is passed through object
    {         //and if expilcit call of constructor has been made
        a=0;
        b=0;
    }
    complex(int c,int d)
    {
        a=c;
        b=d;
    }
    void showdata()
    {
        cout<<"Values are\n";
        cout<<a<<endl<<b<<endl;
    }
    ~complex() //it is called as destructor 
    {
        //to show that destructor works fine
        cout<<"Destructor is called succesfully\n";
    }
};
int main()
{
    int a,b;
    cout<<"Enter data i.e Enter two numbers\n";
    cin>>a>>b;
    complex c1(a,b); //implicit call be like c1(a,b)
    //c1=complex(a,b); //This is called explicit call of constructor
    c1.showdata();
    return 0;
}


