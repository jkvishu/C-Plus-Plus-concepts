/* A sample program to see the use of seekg and seekp function*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char ch,ch1;
    int pos;
    system("clear");
    fstream f;
    /*
    f.open("myfile.txt",ios::in);
    f.seekg(-1,ios_base::cur); // taking value from the 2 position before the current poistion of the get pointer which is at 0;
    f.get(ch); // inserting that element from the file to ch character varaible
    cout<<"The value you demanded is \n";
    cout<<ch<<endl;
    */
    /*
    f.seekg(3,ios_base::beg); // taking the value 4 position  after the begning poistion of the get pointer which is at 0;
    f.get(ch);
    cout<<"The value you demanded is \n";
    cout<<ch<<endl;

    f.seekg(-3,ios_base::end);
    f.get(ch);
    cout<<"the value you demanded is\n";
    cout<<ch<<endl;
    f.close();
    */
    f.open("myfile.txt", ios::out |ios::app | ios::ate );
    pos=f.tellp();
    cout<<"current position of pointer is\n";
    cout<<pos<<endl;
    cout<<"after calling seekp the pointer is pointing to this position\n";
    f.seekp(5,ios_base::beg);
    cout<<f.tellp()<<endl;
    // NOTE:- we cannot make changes in the middle of the file without creating a new file
    // so when i tried to replace or add characters in middle or beg of file they are added automaticaly to the end of file
    /*cout << "enter a character you want to insert in the file\n";
    cin>>ch;
    f<<ch;
    cout << "character inserted\n";
    cout << "enter a character you want to insert in the file\n";
    cin>>ch1;
    f.seekp(-1,ios_base::cur);
    f.put(ch1);
    cout << "character inserted\n";*/
    f.close();
    return 0;
}