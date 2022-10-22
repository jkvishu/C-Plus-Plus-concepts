/* a program to understand the concept of paramaterized constructor
and for what purpose it is made?*/
#include<iostream>
using namespace std;
class complex 
{
    int a,b;
    public:
    complex() //it is compulsory to make default constructor if no argument is passed through object
    {         //and if expilcit call of constructor has been made
        a=0;
        b=0;
    }
    complex(int c,int d)
    {
        a=c;
        b=d;
    }
    void showdata()
    {
        cout<<"Values are\n";
        cout<<a<<endl<<b<<endl;
    }

};
int main()
{
    complex c1; //implicit call be like c1(n,m)
    int a,b;
    cout<<"Enter data i.e Enter two numbers\n";
    cin>>a>>b;
    c1=complex(a,b); //This is called explicit call of constructor
    c1.showdata();
    return 0;
}