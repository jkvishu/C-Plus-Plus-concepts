// A class which contains pure virtual function is known as Abstract class.
// When a do nothing function is declared as virtual it becomes a pure virtual function and 
// It is necessary to decalre the do nothing function as virtual in parent class.
// Also we cannot make objects of such classes
// this is very much usefull when we are using hirachical inheritance.
#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    virtual void insert(int)=0;// A do nothing function
    A()
    {
        cout<<"Constructor of class A is called\n";
        a=0;
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
    void insert(int i)
    {
        a=i;
    }
    B():A()
    {
        cout<<"Constructor of class B is called\n";
    }
    ~B()
    {
        cout<<"Destructor of class B is called\n";
    }
};
int main()
{
    int k;
    cout<<"Enter an integer\n";
    cin>>k;
    B b1;
    b1.insert(k);
    b1.show();
/*  cout<<"\nAnother way to access\n";
    A *ptr;
    ptr=&b1;
    ptr->insert(k); */ // by this two lines we can do the same work done by the above two lines. as they have the same meaning
    //ptr->show(); but here we will getting an message (not an error) as "zsh: segmentation fault" if the 53 line code is not there. 
    return 0; // AS we have studied that we cannot make objects of the abstract class also it is not worth making pointers for accessing those member functions of abstract class.
}