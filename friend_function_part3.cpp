//A PROGRAM TO SHOW OVERLOADING OF OPERATORS AS A FRIEND FUNCTION.
//In friend function we have to pass an extra argument in comparison
//of normal operator overloading concept.
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
    friend complex operator+(complex,complex);
};
complex operator+(complex c,complex d)
{
    complex temp;
    temp.a=c.a+d.a;
    temp.b=c.b+d.b;
    return temp;
}
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
    c3=c1+c2;  //c3=operator+(c1,c2); another way //meaning is operator '+' as a function call hua and c1 and c2 as an argument pass hue and phir + operator ne zo return kia wo c3 me assign hua 
    cout<<"\nResult after Addition of data of two objects is \n";
    c3.showdata();
}
