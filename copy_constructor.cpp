/* In structures we were directly assigning or copying two variables of structure i.e for eg:- s1.roll_no=s2.roll_no;
but in class we cannot do the same way for objects*/
//so we need copy constructor for that, either it is made by compiler
//or it is made by user depending on the need
//A copy constructor is a member function that initializes an object using another object of the same class
//compiler call two types of constructor :1.default constructor 2.copy constructor (in this case)
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
    complex(int x,int y)
    {
        a=x;
        b=y;
    }
    complex(complex &c)//we have to use & before c so to avoid recursion
    {
        a=c.a; //this is a user defined copy constructor
        b=c.b;
    }
    void showdata()
    {
        cout<<"Data is\n";
        cout<<"a= "<<a<<"\nb= "<<b<<endl;
    }

};
int main()
{
    int i,j;
    cout<<"Enter values \n";
    cin>>i>>j;
    complex c1;
    c1=complex(i,j);
    complex c2; //default copy constructor will be made and call by the compiler for 100% and it is upto us that we want to make a copy constructor of own or not;
    c2=complex(c1); //copying data of c1 into c2
    cout<<"Data of c1\n";
    c1.showdata();
    cout<<endl;
    cout<<"Data of c2\n";
    c2.showdata();
    cout<<endl;
    return 0;     /*When is  copy constructor called? 
In C++, a Copy Constructor may be called in the following cases: 
1. When an object of the class is returned by value. 
2. When an object of the class is passed (to a function) by value as an argument. 
3. When an object is constructed based on another object of the same class. 
4. When the compiler generates a temporary object.
It is, however, not guaranteed that a copy constructor will be called in all these cases, because the C++ Standard allows the compiler to optimize the copy away in certain cases, one example is the return value optimization (sometimes referred to as RVO).*/
}