//A sample program to show the use of concept.
//Overloading of uniary operators (++pre and post++) as a friend function.
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
    friend complex operator++(complex&);// here we get benifited of pass by reference concept. 
    friend complex operator++(complex&,int);//now we can actually bring changes in the real values of actual argument objects as it is required to us to show changes in actual values 
    //instead of passing their values in another formal object due to which we will not be able to see changes in actual arguments object values.
};
complex operator++(complex &c)
{
    complex temp;
    temp.a=(++c.a);
    temp.b=(++c.b);
    return temp;
}
complex operator++(complex &d,int)//previous c++ rule for the concept of operator overloading of pre and post increment i.e we have to pass a integer argument in post operator when we overload pre and post increment operator in same program.
{
    complex temp;
    temp.a=d.a++;
    temp.b=d.b++;
    return temp;
}
int main()
{
    complex c1,c2,c3,c4;
    int q,e,k,l;
    system("clear");
    cout<<"\nEnter data for 1 object\n Enter two numbers\n";
    cin>>q>>e;
    cout<<"\nEnter data for 2 object\n Enter two numbers\n";
    cin>>k>>l;
    c1.setdata(q,e);
    c2.setdata(k,l);
    c3=++c1;
    c4=c2++;
    cout<<"\nValues 3rd object when storing values of 1 object after pre increment \n";
    c3.showdata();
    cout<<"\nValues 4rd object when storing values of 2 object after post increment \n";
    c4.showdata();
    cout<<"\nprinting actual values of 1 object just after pre increment\n";
    c1.showdata();
    cout<<"\nprinting actual values of 2 object just after post increment\n";
    c2.showdata();
}
