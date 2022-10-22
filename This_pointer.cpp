/* 1.This is a local object pointer in every instance member function contaning 
   address of the caller object
   2.it cannot be modify.
   3.it is used to refer caller object in member function and we do not require to make it
   as it is present in every instance member function*/
// 1.Used for making same member variable name as of the local varaible name of member function.
// 2.To return reference to the calling object 
// When a reference to a local object is returned, the returned reference can be used to chain function calls on a single object.
#include<iostream>
using namespace std;
class Complex 
{
    private:
    int a,b;
    public:
    Complex() // If declared under private than when object will be created it will not be called due to inaccessiblity
    {
        a=0;
        b=0;
    }
    void setdata(int a,int b)
    {
        this->a=a;// this pointer
        this->b=b;// this pointer 
    }
    void showdata()
    {
        cout<<"a= "<<a<<"\nb= "<<b<<endl;
    }
};
int main()
{
    int i,j;
    cout<<"Enter two numbers\n";
    cin>>i>>j;
    Complex c,*p;//Object pointer
    p=&c;//contaning address of object c of class complex
    p->setdata(i,j);//calling the member function of complex with the help of object pointer
    p->showdata();
}
