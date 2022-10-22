/*Accordiing to c++ if we want to use the operator symbols as a function
name,we can do it but 1.we have to use the Keyword:"Operator" and 2.we can
use only those operator which were valid as an operator in (C) language.*/
#include<iostream>
using namespace std;
class complex 
{
    private:
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"\na= "<<a<<endl;
        cout<<"\nb= "<<b<<endl;
    } 
    complex operator+(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }

};
int main()
{
    complex c1,c2,c3;
    int q,e,r,t;
    cout<<"\nEnter data for 1 object\n Enter two numbers\n";
    cin>>q>>e;
    cout<<"\nEnter data for 2 object\n Enter two numbers\n";
    cin>>r>>t;
    c1.setdata(q,e);
    c2.setdata(r,t);
    c3=c1+c2;  //c3=c1.operator+(c2); another way //meaning is 'c1' ne operator '+' ko call kia and c2 as an argument pass krdia or phir + operator ne zo return kia wo c3 me assign hua 
    cout<<"\nResult after Addition of data of two objects is \n";
    c3.showdata();
}