// Theory in copy
// using new and delete keyword in sample program.
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    cout<<"How many numbers you want in array \n";
    cin>>j;
    int *p=new int[j];// creating dynammic memory of integer type
    cout<<"Enter the numbers one by one\n";
    for(i=0;i<j;i++)
    {
        cin>>p[i];
    }
    cout<<"All the numbers you enter are detailed below\n\n";
    for(i=0;i<j;i++)
    {
        cout<<p[i]<<endl;
    }
    delete []p;// deleting or releasing memory that is created dynamically.
}