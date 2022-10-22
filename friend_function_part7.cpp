/* A simple and complete C++ program to demonstrate friend function of another class.
   which means a member of 1 class has become friend of 2 class to access the private members of class 2 itself */
#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    public:
    void insert(B&); //accesing private data members of class B by declaring this function as a friend in class B;
    void showdata(B);// same;
};
class B
{
    int b;
    public:
    void add(int i)
    {
        b=i;
    }
    void show()
    {
        cout<<"Another way to show data by class B object\n";
        cout<<"\nb= "<<b<<endl;
    }
    friend void A::insert(B &);
    friend void A::showdata(B);
};
void A::insert(B &x)
{
   x.b=x.b+5;
}
void A::showdata(B q)
{
   cout<<"Showing data through the class A object\n";
   cout<<"b= "<<q.b<<endl;
}
int main()
{
    int i;
    cout<<"Enter a integer value\n";
    cin>>i;
    B b1;
    A a1;
    b1.add(i);//B class ke object ne apne member function add ko call krke apne private data members me value dali; 
    a1.insert(b1);//yaha A class ke object ne friend function ko call krke class B ke private members ki value ke sath chaid chad krdi.
    a1.showdata(b1);//same chij krke value bhi dikha di dusri class ke private members ki.
    b1.show();// B ne kudh ki value kudh ke function ko call krke dikha di.
}