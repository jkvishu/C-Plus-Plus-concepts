/*Rule 1.Binary operator me zo left operand hota ha wahi caller object hota ha
eg:- c3=c1+c2 :* c1 is caller object 
2.But in uniary operator their is only one operand and that is the only caller object and we define it accrding to the style of c++*/
// A program to show the use of uniary operator as a function name.
// storing the negative elements of object 1 into another object.
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
    void insert(int i,int j)
    {
        a=i;
        b=j;
    }
    complex operator-()
    {
        complex temp; //remember temp is also a object of class complex hence constructor and destructor will be called for this also
        temp.a=-a;
        temp.b=-b;
        return temp;
    }
    void showdata()
    {
        cout<<"Negative of the numbers you entered\n";
        cout<<"a= "<<a<<"\nb= "<<b<<endl;
    }
    ~complex()
    {
        cout<<"Destructor is called\n";
    }
};
int main()
{
    int i,j;
    cout<<"Enter two integer numbers\n";
    cin>>i>>j;
    complex c1,c2;
    c1.insert(i,j);
    c2=-c1;
    c2.showdata();
    return 0;
}