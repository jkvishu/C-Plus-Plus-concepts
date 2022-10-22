/*A program to show how the constructor and destructor will be called or invoked and executed in the case of inheritance*/
/* 1.In inheritance when we create object of derived class than a default constructor of child class will be called first and than
     the default constructor of parent class will be called by child class constructor
     BUT The parent classs constructor will be executed  at first and than the child class constructor */
/* 2.But what if we make a paramaterized constructor in child class or base class than,
     we have to create a constructor by ourself in the base class and we have to explicitly call it by the 
     constructor of child class*/  
/* 3.Destructor calling is also similar but the execution is vice versa of constructor 
     And also we do not require to call the parent class destructor as it is done by the compiler
     on it's own.when the code of the destructor of the child class is finished compiler itself implement 
     the necessary steps to call the destructor of parent class in the end;*/       
#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    A(int h)
    {
        a=h;
        cout<<"Constructor of A is called\n";
    }
    void insert(int i)
    {
        a=i;
    }
    void show()
    {
        cout<<"a= "<<a<<endl;
    }
    ~A()
    {
        cout<<"Destructor of class A is called\n";
    }
};
class B:public A
{
    public:
    int b;  //the line below is main line of user made constructor in inheritance showing how the constructor is called and values are passed in paranthesis.
    B(int k,int l):A(k)// if we make a paramaterized constructor in base class only than also the process is same 
    {
        b=l;
        cout<<"Constructor of B is called\n";
    }
    void insert_1(int k)
    {
        b=k;
    }
    void show2()
    {
        cout<<"b= "<<b<<endl;
    }
    ~B()
    {
        cout<<"Destructor of class B is called\n";
    }

};
int main()
{
    int i,j;
    cout<<"Enter two numbers you want in the constructor\n";
    cin>>i>>j;
    B b(i,j);
    //b.insert_1(j);
    //b.insert(i); 
    b.show();
    b.show2(); 
}