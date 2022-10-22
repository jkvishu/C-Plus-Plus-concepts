/* A program to show the use of tellg and tellp function in file hadnling*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream f;
    int g;
    char ch,ch1;
    system("clear");
    f.open("myfile.txt",ios::in);
    g=f.tellg();
    while(f.get(ch))
    {
    g=f.tellg(); // tellg function has a get pointer which points to the very first character of a string i.e index 0 and returns its position (0) which is stored in g variable.
    // As soon as we have read the first character of a string from the file to our program variable 
    //  the get pointer start pointing to the nexrt character of the string i.e index 1
    cout<<"g= "<<g<<" : "<<ch<<endl; // printing the position and the character present at that position.
    /*g=f.tellg(); // now we know that the get pointer is pointing at index 1 so 1 is stored in g.
    f>>ch; // taking the character at 1 position and now the get pointer start pointing to 2 index
    cout<<"g= "<<g<<" : "<<ch<<endl;*/
    /*cout<<"last value to show that get pointer is pointing to next index after taking a character from a string present in file\n";
    cout<<" g= ::"<<g<<endl;*/
    }
    f.close();
    f.open("myfile.txt",ios::out|ios::app);
    g=f.tellp();
    cout<<"Now put pointer is pointing to this index\n";
    cout<<g<<endl;
    cout<<"Enter what character u like to insert one by one\n";
    cout<<"Enter '!' to exit \n";
    while(1>0)
    {
    // cin>>ch1; in this line The cin object allows easy input of a single character. However, note that cin will not allow you to input a white space (blank, tab, newline) character.
    // so we use the below line to take whitespace as a single character input from user.
    cin.get(ch1); //  The cin.get function when used in a program will input the next character, which can be any character, white space or non-whitespace.
    if(ch1=='!')
    {
    break;
    }
    else
    {
    f<<ch1;
    /*g=f.tellp();
    cout<<"Now put pointer is pointing to this index after inserting a character\n";
    cout<<g<<endl;*/
    }
    }
    return 0;
}