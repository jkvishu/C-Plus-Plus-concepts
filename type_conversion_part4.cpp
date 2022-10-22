/* A sample program to show that how one class type is converted into another class type 
 this can be implemented through both constructor and operator casting 
 Here we are using constructor method */
/* NOTE:- VVV-IMPORTANT 
          In this case when we use constructor method for type conversion we have to remember some important points
          1.the class type who has to be changed into another class type i.e which is at
            right side of the = operator has to be defined before the left side class 
          2.also remember that if u defined the classes in wrong way than u will get this error
           error: unknown type name 'product' item(product p2) */
#include<iostream>
using namespace std;
class product
{
    int a,b;
    public:
    product()
    {
        cout<<"default constructor of class product\n";
    }
    friend class item;
    void insert(int i,int j)
    {
        a=i;
        b=j;
    }
    ~product()
    {
        cout<<"Destructor of class product\n";
    }
};
class item
{
    int a,b,c;
    public:
    item()
    {
        cout<<"default constructor of class item\n";
    }
    void show()
    {
        c=a+b;
        cout<<"The sum of two number is\n";
        cout<<"c= "<<c<<endl;
    }
    item(product p2)
    {
        a=p2.a;
        b=p2.b;
        cout<<"copy constructor is called\n";   
    }
    ~item()
    {
        cout<<"Destructor of class item\n";
    }
};
int main()
{
    int i,j;
    system("clear");
    cout<<"Enter two numbers\n";
    cin>>i>>j;
    product p1;
    p1.insert(i,j);
    item i1;
    i1=p1;
    i1.show();
}
// #2 METHOD i.e by casting operator
/* In this case vice-versa  happens of constructor*/ 
/*
#include<iostream>
using namespace std;
class item
{
    int a,b,c;
    public:
    friend class product;
    item()
    {
        cout<<"default constructor of class item\n";
    }
    void show()
    {
        c=a+b;
        cout<<"The sum of two number is\n";
        cout<<"c= "<<c<<endl;
    }
    ~item()
    {
        cout<<"Destructor of class item\n";
    }
};
class product
{
    int a,b;
    public:
    product()
    {
        cout<<"default constructor of class product\n";
    }
    void insert(int i,int j)
    {
        a=i;
        b=j;
    }
    operator item()
    {
        item i2;
        i2.a=a;
        i2.b=b;
        cout<<"copy constructor is called\n";  
        return (i2); 
    }
    ~product()
    {
        cout<<"Destructor of class product\n";
    }
};
int main()
{
    int i,j;
    system("clear");
    cout<<"Enter two numbers\n";
    cin>>i>>j;
    product p1;
    p1.insert(i,j);
    item i1;
    i1=p1;
    i1.show();
}*/