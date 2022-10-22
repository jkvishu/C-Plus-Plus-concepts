// A sample program to show that we cannot use insertion and extraction operator as member function of a class.(WITHOUT the  help of friend function)
// NOTE:- Insertion and extraction operator can only be implemented in class by using the friend keyword before the function prototype.
// This is called as operator overloading of insertion and extraction operator.
// This concept is known as operator overloading and it is the part of compile time polymorphism(OOPs principle)..
#include<iostream>
using namespace std;
class A
{
    int a,b,c;
    public:
    friend istream & operator >>(istream &,A &);
    // IF we don't use friend keyword than we will not be able to use above functions and we cannot declare them in the class as well
    friend ostream & operator <<(ostream &,A);
};
istream & operator >>(istream &lelo,A &v)
{
    lelo>>v.a;
    lelo>>v.b;
    v.c=v.a+v.b;
    return lelo;
}
ostream & operator <<(ostream &dedo,A b)
{
    dedo<<b.c<<endl;
    return dedo;
}
int main()
{
    cout<<"enter the two number dude\n";
    A a;
    cin>>a;
    cout<<"THe sum of the number you entered is:\n";
    cout<<a;
    return 0;
}