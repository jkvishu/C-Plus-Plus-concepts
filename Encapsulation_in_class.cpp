/* Both structure and class are non primitive data types and are concepts based on Encapslation
The only difference between them is that :
The members of structures are by default public and of class are by default private*/
#include<iostream>
#include<string>
using namespace std;
class user
{
    public: //If not declared public than they will become private and will not be accessible than
    string name; //data member
    void setdata() //member function //both lie in one unit of class named user
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
    user s1; //class user : object s1
    s1.setdata();
    s1.showdata();
}