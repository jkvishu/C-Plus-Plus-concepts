// Sample program to show method overriding and hiding occur because of early binding
// ** And it is usefull when we dont want to use the service of parent class when we make 
// an object of child class we use method overriding to do so.
// It is implemented by taking the same name of the member function of the parent class
// in the child class than the object of child class will call member function of child class only
// instead of calling the parent class member function;
#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    void insert(int k)
    {
        a=k;
    }
    void show()
    {
        cout<<"a= "<<a<<endl;
    }
};
class B:public A
{
    int b;
    public:
    void insert(int l)
    {
        b=l;
    }
    void show()
    {
        cout<<"b= "<<b<<endl;
    }
};
int main()
{
    int j,k;
    cout<<"Enter two integer numbers\n";
    cin>>j>>k;
    A a;
    B b;
    b.insert(k); //Method overriding 
    // b.insert(); //Method hiding // if no argument is passed than error will occur because compiler will think that the function name are same but argument is intenionaly not passed and all this happen due to early binding of compiler.
    b.show(); // Due to early binding we will not be able to call the show function of class A.
}  
     //This is called method overriding