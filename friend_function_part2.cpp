/*1.friend function can become friend to more than one class
  -->just we have to declare the same function in another class.
  2.it does not affect the friend function if it is declared inside the 
    class under private ,public,or protected because it is not a member function.
  3.VVI->> USE
      -->> 1 se zada class ke private data members ko 1 hi operation me
        access krne ki kabiliyat sirf friend function me ha.*/
// A program to show how we can use friend function for more than 1 class.
#include<iostream>
using namespace std;
class complex1;
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
    friend void add(complex,complex1); //declaring a friend function
};
class complex1
{
    int c,d;
    public:
    complex1()
    {
        c=0;
        d=0;
    }
    void insert(int i,int j)
    {
        c=i;
        d=j;
    }
    friend void add(complex,complex1); //declaring a friend function
};
void add(complex u,complex1 i) //defining friend function
{
    int k;
    k=(u.a+i.c)+(u.b+i.d);
    cout<<"Sum of all number you entered in both class is = "<<k<<endl;
}
int main()
{
    int i,j,k,l;
    cout<<"Enter two integer numbers for 1 class object\n";
    cin>>i>>j;
    cout<<"Enter two integer numbers for 2 class object\n";
    cin>>k>>l;
    complex c1;
    complex1 c2;
    c1.insert(i,j);
    c2.insert(k,l);
    add(c1,c2); //calling friend function to add the two private integer numbers of object c1 of class complex.
    return 0;
}