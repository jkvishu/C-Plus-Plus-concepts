#include<iostream>
using namespace std;
int main()
{
    int i=0,j=0,a,b;
    a=i++;
    b=++j;
    cout<<"post increment\n";
    cout<<a<<" \ni= "<<i<<endl;
    cout<<"pre increment\n";
    cout<<b<<" \nj= "<<j<<endl;
    return 0;
}