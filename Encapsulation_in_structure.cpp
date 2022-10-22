/* Encapsulation is one of the principle of oops language and it is an act of combining properties and methods related to same object*/
/* a program to show that encapsulation can be accompilshed by using structure*/
#include<iostream>
#include<string>
using namespace std;
struct user
{
    string name; //data member
    void setdata() //member function //both lie in one unit of structure named user
    {
        cout<<"Enter your name\n";
        getline(cin>>ws,name);
    }
    void showdata()
    {
        cout<<"\nYour name is = "<<name<<endl;
    }
};
int main()
{
    user s1; //structure variable
    s1.setdata();
    s1.showdata();
    return 0;
}

