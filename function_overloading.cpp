/*a program to understand the basic concept of function overloading (one of the way to implement (runtime) polymorphism(oops prrinciple))*/
#include<iostream>
using namespace std;
int area(int);
/*float area(int); cannot be used because we cannot overload function declarations that differ only
by return type or we can say same function signature(parameter return type) with different return type will not be overloaded.*/
float area(float);
int area(int,int);
int main()
{
    int s,l,b,r,square,rectangle;
    cout<<"Enter the side of the square\n";
    cin>>s;
    cout<<"the area of square is\n ";
    square=area(s);
    cout<<square<<endl;;
    cout<<"Enter the length and breath of rectangle\n";
    cin>>l>>b;
    cout<<"THe area of rectangle is \n";
    rectangle=area(l,b);
    cout<<rectangle<<endl;
    cout<<"Enter the radius of the circle\n";
    cin>>r;
    float circle=area(r);
    cout<<"The area of circle is \n";
    cout<<circle<<endl;
    return 0;
} 
int area(int x)
{
    return(x*x);
}
int area(int y,int z)
{
    return(y*z);
}
float area(float g)
{
    return(3*g*g);
}