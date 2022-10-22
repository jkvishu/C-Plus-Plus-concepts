/* In method overriding we have seen that we were not able to call the member functions of 
  parent class by creating an object of child class. sometimes its very disadvantageous and 
  we do need to call member functions of another classes according to our needs so to overcome this situation
  we use the concept of virtual functions and base class pointer or base class object pointer*/
  // Virtual function will lead to late binding and hence avoid method over riding;
  // base class pointer can point to the object of any of it's descendant class but vice-versa not possible.
#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A()
    {
        cout<<"constructor of class A is called\n";
    }
    virtual void insert(int k)
    {
        cout<<"Insert of class A is called\n";
        a=k;
    }
    virtual void show()
    {
        cout<<"a= "<<a<<endl;
    }
    virtual ~A()
    {
        cout<<"Destructor of A is called\n";
    }
};
class B:public A
{
    int b;
    public:
    B()
    {
         cout<<"constructor of class B is called\n";
    }
    void insert(int l)
    {
        cout<<"Insert of class B is called\n";
        b=l;
    }
    void show()
    {
        cout<<"b= "<<b<<endl;
    }
    virtual ~B()
    {
        cout<<"Destructor of B is called\n";
    }
};
int main()
{
    int j,k;
    system("clear");
    cout<<"Enter two integer numbers\n";
    cin>>j>>k;
    A a,*p;
    B b;
    p=&b;
    //b.insert(k); //Method overriding 
    // b.insert(); //Method hiding // if no argument is passed than error will occur because compiler will think that the function name are same but argument is intenionaly not passed and all this happen due to early binding of compiler.
    //b.show(); // Due to early binding we will not be able to call the show function of class A.
    p->insert(k); // calling the insert for class A instead of calling for class B although having the address of class B object this is all happening due to early bidning happens at compile time when the functions are not declared virtual.
    p->show();  // After declaring the functions as virtual in base class will lead to late binding which happens at run time
    a.insert(j); // and now  we can call the funcions of class b by using base class A object pointer 
    a.show();
}  
