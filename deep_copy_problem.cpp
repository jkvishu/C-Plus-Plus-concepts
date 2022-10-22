#include<iostream>
using namespace std;
class A
{
    int a,b;
    int *p;
    public:
    A()
    {
        cout<<"constructor is called\n";
        p=new int;
    }
    void insert(int i,int j)
    {
       a=i;
       b=j;
       *p=a+b;
    }
    void show()
    {
        cout<<"value of p= "<<*p<<endl;
    }
    A(A &c)
    {
        a=c.a;
        b=c.b;
        p=new int;
        *p=a*b;
    }
    ~A()
    {
        cout<<"Destructor is called\n";
        delete p;
    }
};
int main()
{
    system("clear");
    int f,j;
    cout<<"Enter a number\n";
    cin>>f>>j;
    A c1,c2;  
    c1.insert(f,j);
    cout<<"data of 1 object when two integers are added\n";
    c1.show();
    cout<<"help\n";
    c2=A(c1); // problem is arrising due to the explicit call it is working fine when implicit call is done.
    cout<<"data of 2 object when two integers are multiplied\n";
    c2.show();
}
//NOTE:- DONT DO EXPLICIT CALL OF COPY CONSTRUCTOR THE PROBLEM IS OCCURING WHICH I DONT KNOW.