/* Using of Pre and post increment or decrement operator as a function name 
simontaneously in a program is known as operator overloading (of uniary operator)*/
//operator overloading is a way of implementing compile time polymorphism
// a program to show how we can use a same operator as a function name for two different jobs or task.
#include<iostream>
using namespace std;
class complex 
{
    int a,b;
    public:
    complex()
    {
        a=0;
        b=0;
    }
    void insert(int i,int j)
    {
        a=i;
        b=j;
    }
    complex operator++()
    {
        complex temp;
        temp.a=++a;
        temp.b=++b;
        return temp;
    }
    complex operator++(int) //for post increment or decrement we have to pass an integer argument so that the compiler can differenciate between post and pre operator call
    {
        complex temp;
        temp.a=a++;
        temp.b=b++;
        return temp;
    }
    void showdata1()
    {
        cout<<"Numbers saved in another object just after pre increment\n";
        cout<<"a= "<<a<<"\nb= "<<b<<endl;
    }
    void showdata2()
    {
        cout<<"Numbers saved in another object just after post increment\n";
        cout<<"a= "<<a<<"\nb= "<<b<<endl;
    }
    void showdata3()
    {
        cout<<"printing values of Actual numbers after pre increment\n";
        cout<<"a= "<<a<<"\nb= "<<b<<endl;
    }
    void showdata4()
    {
        cout<<"printing values of Actual numbers just after post increment\n";
        cout<<"a= "<<a<<"\nb= "<<b<<endl;
    }
    
};
int main()
{
    int a,b;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    complex c1,c2,c3,c4;
    c1.insert(a,b);
    c2.insert(a,b);
    c3=++c1;
    c4=c2++;
    c3.showdata1();
    c4.showdata2();
    c1.showdata3();
    c2.showdata4();
    return 0;
}