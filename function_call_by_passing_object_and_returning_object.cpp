/* a program to show that how we can pass objects and return objects in class*/
/* a program for the addition of data of two objects by passing an object and returning it*/
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
    complex add(complex c)
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
    c3=c1.add(c2);
    cout<<"\nResult after Addition of data of two objects is \n";
    c3.showdata();
}