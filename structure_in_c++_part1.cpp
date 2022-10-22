/*a basic program to show the use of structure in c++ */
#include<iostream>
#include<string.h>
using namespace std;
struct student
{                                     /* a structure is made*/
    string name;  /* string is used because user can input his full name with white spaces*/
    char sec;
    int roll_no,clss;
};
int main()
{
    student s1,s2;
    cout<<"Enter the name of the 1 student\n";
    getline(cin,s1.name);   /*using gets pointer to include name with white spaces is dangerous because it can overflow stack */
                            /* hence we are using getline function of class string to input data with white spaces and special constant*/
    cout<<"enter the roll number of 1 student\n";
    cin>>s1.roll_no;
    cout<<"Enter his class\n";
    cin>>s1.clss;
    cout<<"Enter his secton\n";
    cin>>s1.sec;
    cout<<"Data of first student\n";
    cout<<"name="<<s1.name<<"\n"<<"roll number="<<s1.roll_no<<"\n"<<"class="<<s1.clss<<"\n"<<"section="<<s1.sec<<"\n\n";
    s2=s1;               /*copying data of 1 student into another student by just using assigning one struct variable with other */
    cout<<"enter the roll number of 2 student\n\n";
    cin>>s2.roll_no;
    cout<<"Data of second student\n";
    cout<<"name="<<s2.name<<"\n"<<"roll number="<<s2.roll_no<<"\n"<<"class="<<s2.clss<<"\n"<<"section="<<s2.sec<<"\n\n";
    return 0;

} 