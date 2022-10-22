/* A program to show the concept of friend class  */
// This concept is usefull when we want to access the private members of one class in another class.
// But also remember this could be only possible if the object of the first class whose private data member you want to access is passed to the friend function present in the second class
// i.e Object creation of that class is required mandatorly whoose private members we want to access in a friend function which is friend to that class.(so without object we cannot access private members in any way)
//NOTE:-  But the most main important advantage of friend functions or anything which is made friend to class by using friend keyword
// IS that we can access those class data members and member functions which are public: WITHOUT THE CREATION OF THAT CLASS OBJECT ALSO;
#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    friend class B; //declaring class b as a friend of class A
    //Now member of class b can access private members of class A. 
    void insert(int i,int j)
    {
       a=i;
       b=j;
    }
    void show()
    {
        cout<<"a= "<<a<<"\nb= "<<b<<endl;
    }
};
class B
{
    public:
    void add_show(A &x) // see here object was passed by reference so that we dont have to create a another object of that class and store values in them and than make changes and than again return or print values
    // two advantages were provided by call by reference 1.we saved some space (by not creating another object) and 2.saved time ->>by not copying the values of that object into the new object ,calling constructor all etc.
    // Instead when we want to see changes in the actual values of the data members of an object we prefer to pass that object by reference.
    {
        x.a=x.a+2; // here we are accessing the private data members of class A and making changes in them in an another class which shows that how cool features a friend function provides
        x.b=x.b+3;
        cout<<"Updated values are\n";
        cout<<"a= "<<x.a<<"\nb= "<<x.b<<endl;
    }
};
int main()
{
    int i,k;
    cout<<"Enter two integer number\n";
    cin>>i>>k;
    A a1;
    a1.insert(i,k);
    cout<<"Actual values you entered\n";
    a1.show();
    B b1;
    b1.add_show(a1); // As i have told earlier that to access private data members of a class outside it ,we require friend function but that friend function also require the object of that class at the same time. 
}