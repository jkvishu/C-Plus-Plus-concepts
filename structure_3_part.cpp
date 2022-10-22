/* a program to show a problem or errors occur while using structure concept*/
#include<iostream>
#include<string>
struct book
{
    char title[20];
};
int main()
{
   book b1;
   /* b1.title="Heroic"; gives error : array type 'char [20]' is not assignable*/ 
   /*solution is this*/
   strcpy(b1.title,"heroic");
   std::cout<<"\nTitle= "<<b1.title<<std::endl;
   return 0; 
}