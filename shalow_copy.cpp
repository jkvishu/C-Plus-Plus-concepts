/* A program to illustrate the concept of shalow copy*/
#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    void insert(int j,int k)
    {
        a=j;
        b=k;
    }
    void show()
    {
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
    }
};
int main()
{
    int i,j;
    system("clear");
    A a1;
    cout<<"Enter two integer value\n";
    cin>>i>>j;
    a1.insert(i,j);
    // A a2=a1; here copy constructor is called which is made by the compiler on it's own by default for this type of cases
    A a2; // this is what we called shallow copy
    a2=a1; // here implicit copy assignment operator is called to copy the data of one object into another.
    cout<<"Data of a1 object\n";
    a1.show();
    cout<<"Data of a2 object\n";
    a2.show();
    return 0;
}