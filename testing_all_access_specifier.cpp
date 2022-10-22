// Testing all the access specifier feature.
/*1.If protected members of parent class are declared as private in child class than the object of that child class cannot access those members but the class itself can,also the next class after child classes cannot access any member of parent class in any condition 
  2.*/
#include<iostream>
using namespace std;
class A
{
    int a;
    protected:
    int b;
    public:
    int c;
    void insert_data(int i, int j,int k)
    {
        a=i;
        b=j;
        c=k;
    }
};
class B:protected A
{                     //public members when declared protected than they will not be accessible by any of the object of derived clasess but is available to the base class or parent class.
    public:
    void show4()
    {

    }
    void show2() // accessible when used private access modifier in child class
    {
        cout<<"b= "<<b<<endl;
        cout<<"c= "<<c<<endl;
    }
};
class C:public B
{
    public:
    void show3()
    {
      //cout<<b; not accessible when used private access modifier in child class
      //cout<<c; not accessible when used private access modifier in child class
      //cout<<b; // accessible when used public access modifier in child class
      cout<<b; // accessible when used protected access modifier in child class
    }

};
int main()
{
    int i,j,k;
    system("clear");
    cout<<"Enter Three numbers\n";
    cin>>i>>j>>k;
    A q;
    q.insert_data(i,j,k);
    B w;
    //cout<<w.b; not accessible when used public access modifier in child class because we are trying to access protected members which is not possible.
    //w.c=2; not accessible when used private access modifier in child class
    C e;
    w.show2();
}