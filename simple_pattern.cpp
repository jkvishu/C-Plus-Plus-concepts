#include<iostream>
using namespace std;
int main()
{
    int i,b,j;
    cout<<"Enter the number of lines you want in patten\n";
    cin>>b;
    for(i=0;i<b;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"a";
        }
        cout<<endl;
    }
    return 0;
}