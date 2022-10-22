// A pointer which contains the address of an object is called an object pointer
// A sample program to show how it is made and used 
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
    void setdata(int i,int k)
    {
        a=i;
        b=k;
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