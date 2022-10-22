/* a basic program to show that we can make an array of struct variables to input various data of many peoples at once*/
#include<iostream>
#include<string>
using namespace std;
struct student
{                                     /* a structure is made*/ 
    char sec,clss[20];                            
    string name;                     /* string is used because user can input his full name with white spaces*/
    double roll_no;
};
int main()
{
    int i,j;
    cout<<"Enter how many students you want\n";
    cin>>j;
    student s[j];
    for(i=0;i<j;i++)
    {
    cout<<"Enter the name of the "<<i<<" student\n"; 
    getline(cin>>ws,s[i].name);                             /* if we dont use cin>>ws than compiler skip this step because it treat's white space as delimiters*/ 
    cout<<"enter the roll number of "<<i<<" student\n";  /* and move forward to next instruction and white space came by default in structure */
    cin>>s[i].roll_no;
    cout<<"Enter his class\n";
    cin>>s[i].clss;
    cout<<"Enter his secton\n";
    cin>>s[i].sec;
    }
    cout<<"Data\n\n";
    for(i=0;i<j;i++)
    {
    cout<<"Data of "<<i<<"student\n";
    cout<<"name="<<s[i].name<<"\n"<<"roll number="<<s[i].roll_no<<"\n"<<"class="<<s[i].clss<<"\n"<<"section="<<s[i].sec<<"\n\n";
    }
    return 0;
    }
