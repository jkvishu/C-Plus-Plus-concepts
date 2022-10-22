/* A program to show how to convert class type to primitive type
NOTE:- this type conversion is implemented through operator casting*/
#include<iostream>
using namespace std;
class complex
{
    private:
    int a,b,c;
    public:
    complex()
    {
        cout<<"default constructor\n";
    }
    void insert(int i,int j)
    {
        a=i;
        b=j;
        c=i+j;
    }
    operator int() // here operator is a keyword  and int is the primitive data type that is selected on the basis of value to be returned to the varaible where the conversion take place i.e k=c1;
    {
       return(c);
    }
};
int main()
{
    int i,j,k;
    system("clear");
    cout<<"Enter two integer values\n";
    cin>>i>>j;
    complex c1;
    c1.insert(i,j);
    k=c1; // this line demonstrate k=c1.operator int() which means c1 ne operator int() ko call kia and us function ne k varaible me c ki value return krdi.
    cout<<"The sum of the two integer number you inserted is\n";
    cout<<"c= "<<k<<endl;
    return 0;
}