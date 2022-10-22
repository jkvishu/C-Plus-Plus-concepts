#include<iostream>
using namespace std;
class complex 
{
    static int a;
    int b;
    public:
    void set(int i,int k) //it can access both static and non staic member variable i.e both a and b.
    {
        a=i;
        b=k;
    }
    static void show() //if this and above set function is declared private than we cannot access it outside the class
    {                  // hence all ways of accessing static member variable are closed
        cout<<"value of a is = "<<a<<endl; //cannot access non static instance member variable b;

    }
    void show1()
    {
        cout<<"value of b is = "<<b<<endl; //it can access both static and non staic member variable i.e both a and b.
    }
};
int complex::a;
int main()
{
    int k,l;
    cout<<"Enter two numbers\n";
    cin>>k>>l;
    complex c;
    c.set(k,l);
    //c.show(); or 
    complex::show();
    c.show1(); //call another function to print value of non static memeber variable b;
    return 0;
}