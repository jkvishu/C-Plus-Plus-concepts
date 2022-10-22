/*some important points :-
 1.Friend function is a not a member function of a class to which it is a friend.
 2.it is declared inside the class but define outside the class.
 3.it can access any member of the class to which it is friend but not directly(if private).
 4.it has no caller object.
 5.it should not be defined with membership label.*/
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
    friend void add(complex); //declaring a friend function
};
void add(complex c) //defining friend function
{
    int k;
    k=c.a+c.b;
    cout<<"Sum of two number is = "<<k<<endl;
}
int main()
{
    int i,j;
    cout<<"Enter two integer numbers\n";
    cin>>i>>j;
    complex c1;
    c1.insert(i,j);
    add(c1); //calling friend function to add the two private integer numbers of object c1 of class complex.
    return 0;
}
/*friend function is made for the purpose of accessing priavte data members of class from "outside" but it cannot access them directly so an object is passed whose variables have to be added 
which indirectly brake the c++ rule and we will read it in next upcoming examples*/ 