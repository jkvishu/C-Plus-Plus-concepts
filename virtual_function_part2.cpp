/* If a function in the parent class is declared as virtual function than the overriding 
function used in the child class or descendant class are also by default become virtual.
And for each of the class having virtual function compiler will make a V-table for them to which a *xyz pointer 
made by the compiler in parent class will point because of the inheritance it becomes the member of the inherited class also.*/
/* Simple bhasa me koi bhi service parent class ki zise hm child class ko nhi dena chate to hm method overriding use krte ha 
 pr ise 1 problem khadi ho zati ha ki agar hme wo service ki zarurat phir se pad gyi to kya krenge to iska hall nikalne ke liye
 hm virtual function use krte ha zis service (function) ko hme allow krna ha child classes me and zise nhi krna use simple rahne do.*/
#include<iostream>
using namespace std;
class A
{                                        //V-table:- 1.virtual void insert ->pointed by *vptr pointer made by the compiler
    int a;
    public:
    virtual void insert(int k)
    {
        cout<<"Insert of class A is called\n";
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
    void insert(int l)                 //V-table:- 1.virtual void insert ->pointed by *vptr pointer made by the compiler
    {
        cout<<"Insert of class B is called\n";
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
    A a,*p;
    B b,*s;

    p=&b; // now p is a base class pointer which contain the address of class B object b. 
    p->insert(k); // As insert is a virtual function therefore due to late binding p will point to the insert of class B only.
    a.insert(j); // to call the object 
    p->show();
    b.show();
}  
