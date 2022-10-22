// here we will discuss class template
// Class template is also known as generic class
/* NOTE:- function overloading and templates are examples of polymorphism 
feature of OOP. Function overloading is used when multiple functions do similar
operations, templates are used when multiple functions do identical operations.
To demonstrate the above line say that in function overloading functions have same or common name that is refered here as operation but have different jobs
for e.g:- area is a common operation that we want to perform but for different shapes(circle,triangle,rectangle) that is we have to make different functions(refered as multiple function) for each of them but with a common name as "area" with different argument.
so--->both of them somewhat provide similar feature */


/* Detail explanation of typename  >>>
"typename"[1][2] is a keyword in the C++ programming language used 
when writing templates. It is used for specifying that a dependent 
name in a template definition or declaration is a type.[3][4] In the
 original C++ compilers before the first ISO standard was completed, 
 the typename keyword was not part of the C++ language and Bjarne Stroustrup 
 used the "class" keyword for template arguments instead. While typename 
 is now the preferred keyword, older source code may still use the class 
 keyword instead (for example see the difference in source code examples between 
 The Design and Evolution of C++ by Bjarne Stroustrup published in 1994 
 and the source code examples in The C++ Programming Language: 
 Fourth Edition by Bjarne Stroustrup published in 2013).*/
#include<iostream>
using namespace std;
template<typename X> // typename is a keyword which is an alternative of "class" keyword i.e template<class X> have the same meaning.
class complex 
{
    X a,b,c,m;
    X d;
    public:
    complex()
    {
        a=0;
        b=0;
        c=0;
    }
    void add(X i,X j)
    {
        a=i;
        b=j;
        c=a+b;  
    }
    void multiply(X q,X e);
    
    void divide(X z,X x)
    {
        a=z;
        b=x;
        d=X(z)/X(x); // Have to do implicit conversion of z and x into double to do the operation of divison because dividing integers truncates the decimal part.
    }
    void show_data()
    {
        cout<<"The addition of two number is = "<<c<<endl;
        cout<<"The product of two number is = "<<m<<endl;
        cout<<"The divison of two number is = "<<d<<endl;
    }
};
template<class X> // This is how we have to define the member function of a class
void complex<X>::multiply(X q,X e)
    {
        a=q;
        b=e;
        m=a*b;
    }
int main()
{
    int a,b;
    cout<<"Enter two number \n";
    cin>>a>>b;
    complex <float>c1; // now every X is replaced by float.
    //complex <int>c2; // now every X will be replaced by int.
    c1.add(a,b);
    c1.multiply(a,b);
    c1.divide(a,b);
    c1.show_data();
}