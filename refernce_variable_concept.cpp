/*a refernce variable is an internall pointer and initialized during declaration of a already declared variable only and it cannnot be updated*/
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a value\n";
    cin>>a;
    int &y=a;  /*ampersand y=a and this means it will contain the address of a in short we can say we are accessing a with the help of y and any change made to y will indirectly reflected to y*/
    cout<<y<<endl;
    y++;
    cout<<y<<endl;   /*yaha pr hmm bus y ko refernce variable bna kr a ko call kre bina y ki madat se usme change and use call bhi kr skte ha*/
    a++;
    cout<<a;
    return 0;
}

