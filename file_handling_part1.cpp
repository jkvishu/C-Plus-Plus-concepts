/* a basic program to show how to read from a file and write in a file*/
#include<fstream>
#include<iostream>
using namespace std;
int main()
{              // remember in opening case the file is bringed from the secondary memory to ram.
fstream f; // taking a single fstream to do both operation of read and write.
string ch,ch1; // string is used as we need many character at once.
system("clear"); // this line will be clearing all the data shown on the terminal window.
f.open("myfile.txt",ios::out|ios::app); // opening the file in output mode i.e to write in the file also the file is opened in append mode so that previous data remains constant when new data is inserted.
cout<<"Enter something in text format\n";
cout<<"to exit from screen type n in next line and press enter to exit\n";
while(f)
{
    getline(cin, ch); // this line will take input from the user untill he press enter 
    if(ch=="n") // it will check whether the user has inputed n or not to exit the loop of writing. 
    break;
    f<<ch<<endl;
}
f.close(); // closing the file so that it can return back to the secondary memory from ram.
f.open("myfile.txt",ios::in); // opening the file in input mode so to read from the file in opening case the file is bringed from the secondary memory to ram. 
cout<<"The string you entered was: \n\n";
while(getline(f,ch1)) // this loop will run untill it founds the end of file.
{
cout<<ch1<<endl;
}
f.close(); // closing the file so that it can return back to the secondary memory from ram.
return 0;
}



