/* 
#######ARTICLE OR SET 1:-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


// A program to demonstrate need of namespace
int main()
{
    int value;
    value = 0;
    double value; // Error here
    value = 0.0;
}
Output :

Compiler Error:
'value' has a previous declaration as 'int value'
In each scope, a name can only represent one entity. 
So, there cannot be two variables 
with the same name in the same scope. Using namespaces, 
we can create two variables or member functions having the same name.


// Here we can see that more than one variables 
// are being used without reporting any error.
// That is because they are declared in the 
// different namespaces and scopes.
#include <iostream>
using namespace std;
  
// Variable created inside namespace
namespace first
{
    int val = 500;
}
  
// Global variable
int val = 100;
  
int main()
{
    // Local variable
    int val = 200;
  
    // These variables can be accessed from
    // outside the namespace using the scope
    // operator ::
    cout << first::val << '\n'; 
  
    return 0;
}
Output:




500
 

Definition and Creation:

Namespaces allow us to group named entities that otherwise would have global scope into narrower scopes, giving them namespace scope. This allows organizing the elements of programs into different logical scopes referred to by names.
Namespace is a feature added in C++ and not present in C.
A namespace is a declarative region that provides a scope to the identifiers (names of the types, function, variables etc) inside it.
Multiple namespace blocks with the same name are allowed. All declarations within those blocks are declared in the named scope.
A namespace definition begins with the keyword namespace followed by the namespace name as follows:

namespace namespace_name 
{
   int x, y; // code declarations where 
             // x and y are declared in 
             // namespace_name's scope
}
Namespace declarations appear only at global scope.
Namespace declarations can be nested within another namespace.
Namespace declarations don’t have access specifiers. (Public or private)
No need to give semicolon after the closing brace of definition of namespace.
We can split the definition of namespace over several units.

// Creating namespaces
#include <iostream>
using namespace std;
namespace ns1
{
    int value()    { return 5; }
}
namespace ns2 
{
    const double x = 100;
    double value() {  return 2*x; }
}
  
int main()
{
    // Access value function within ns1
    cout << ns1::value() << '\n'; 
  
    // Access value function within ns2
    cout << ns2::value() << '\n'; 
  
    // Access variable x directly
    cout << ns2::x << '\n';       
  
    return 0;
}
Output:

5
200
100
 

Classes and Namespace:

Following is a simple way to create classes in a name space

// A C++ program to demonstrate use of class
// in a namespace
#include <iostream>
using namespace std;
  
namespace ns
{
    // A Class in a namespace
    class geek
    {
    public:
        void display()
        {
            cout << "ns::geek::display()\n";
        }
    };
}
  
int main()
{
    // Creating Object of geek Class
    ns::geek obj;
  
    obj.display();
  
    return 0;
}
Output:

ns::geek::display()
Class can also be declared inside namespace and defined outside namespace using following syntax





// A C++ program to demonstrate use of class
// in a namespace
#include <iostream>
using namespace std;
  
namespace ns
{
    // Only declaring class here
    class geek;
}
  
// Defining class outside
class ns::geek
{
public:
    void display()
    {
        cout << "ns::geek::display()\n";
    }
};
  
int main()
{
    //Creating Object of geek Class
    ns::geek obj;
    obj.display();
    return 0;
}
Output:

ns::geek::display()
We can define methods also outside the namespace. Following is an example code.


// A C++ code to demonstrate that we can define 
// methods outside namespace.
#include <iostream>
using namespace std;
  
// Creating a namespace
namespace ns
{
    void display();
    class geek
    {
    public:
       void display();
    };
}
  
// Defining methods of namespace
void ns::geek::display()
{
    cout << "ns::geek::display()\n";
}
void ns::display()
{
    cout << "ns::display()\n";
}
  
// Driver code
int main()
{
    ns::geek obj;
    ns::display();
    obj.display();
    return 0;
}
Output:

ns::display()
ns::geek::display()
namespace in C++ | Set 2 (Extending namespace and Unnamed namespace)
Namespace in C++ | Set 3 (Accessing, creating header, nesting and aliasing)
Can namespaces be nested in C++?

Reference:
http://www.cplusplus.com/doc/tutorial/namespaces/

This article is contributed by Abhinav Tiwari. If you like GeeksforGeeks and would like to contribute, you can also write an article and mail your article to contribute@geeksforgeeks.org. See your article appearing on the GeeksforGeeks main page and help other Geeks.

Please write comments if you find anything incorrect, or you want to share more information about the topic discussed above */


/* #########3 ARTICLE OR SET 2:-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


It is also possible to create more than one namespaces in the global space. This can be done in two ways.

namespaces having different names

// A C++ program to show more than one namespaces 
// with different names.
#include <iostream>
using namespace std;
  
// first name space
namespace first
{
   int func() {  return 5; }
}
  
// second name space
namespace second
{
   int func() { return 10; }
}
  
int main()
{
   // member function of namespace
   // accessed using scope resolution operator
   cout << first::func() <<"\n";        
   cout << second::func() <<"\n"; 
   return 0;
}
Output:




5
10
Extending namespaces (Using same name twice)
It is also possible to create two namespace blocks having the same name. The second namespace block is nothing but actually the continuation of the first namespace. In simpler words, we can say that both the namespaces are not different but actually the same, which are being defined in parts.

// C++ program to demonstrate namespace exntension
#include <iostream>
using namespace std;
  
// first name space
namespace first 
{ 
   int val1 = 500;  
}
  
// rest part of the first namespace
namespace  first 
{ 
   int val2 = 501;  
}
  
int main()
{
   cout << first::val1 <<"\n";        
   cout << first::val2 <<"\n"; 
   return 0;
}
Output:

500
501
Unnamed Namespaces

They are directly usable in the same program and are used for declaring unique identifiers.
In unnamed namespaces, name of the namespace in not mentioned in the declaration of namespace.
The name of the namespace is uniquely generated by the compiler.
The unnamed namespaces you have created will only be accessible within the file you created it in.
Unnamed namespaces are the replacement for the static declaration of variables.

// C++ program to demonstrate working of unnamed 
// namespaces
#include <iostream>
using namespace std;
  
// unnamed namespace declaration
namespace 
{
   int rel = 300; 
}
  
int main()
{
   cout << rel << "\n"; // prints 300
   return 0;
}
Output:

300
This article is contributed by Abhinav Tiwari .If you like GeeksforGeeks and would like to contribute, you can also write an article using contribute.geeksforgeeks.org or mail your article to contribute@geeksforgeeks.org. See your article appearing on the GeeksforGeeks main page and help other Geeks.

Please write comments if you find anything incorrect, or you want to share more information about the topic discussed above.

#####ARTICLE OR SET 3:-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Different ways to access namespace

In C++, there are two ways of accessing namespace variables and functions.


Normal way

// C++ program to demonstrate accessing of variables
// in normal way, i.e., using "::"
#include <iostream>
using namespace std;
  
namespace geek
{
    int rel = 300; 
}
  
int main()
{
    // variable ‘rel’ accessed 
    // using scope resolution operator
    cout << geek::rel << "\n";  // prints 300
  
    return 0;
}
Output :

300
“using” directive

// C++ program to demonstrate accessing of variables
// in normal way, i.e., using "using" directive
#include <iostream>
using namespace std;
  
namespace geek
{
    int rel = 300; 
}
  
// use of ‘using’ directive
>> Using keyword allows us to import an entire namespace into our program with global scope.
>>> and also it can be used to import a namespace into another namespace or any program
using namespace geek;
  
int main()
{
   // variable ‘rel’ accessed 
   // without using scope resolution variable
   cout << rel << "\n";        //prints 300
    
   return 0;
}
Output:




300
Using namespace in header files

We can create namespace in one file and access contents using another program. This is done in the following manner.
We need to create two files. One containing the namespace and all the data members and member functions we want to use later.
And the other program can directly call the first program to use all the data members and member functions in it.
File 1


// file1.h 
namespace foo
{
    int value() 
    { 
       return 5;    
    }
}
File 2


// file2.cpp - Not to be executed online
#include <iostream>
#include “file1.h” // Including file1
using namespace std;
  
int main () 
{
    cout << foo::value();
    return 0;
}
Here we can see that the namespace is created in file1.h and the value() of that namespace is getting called in file2.cpp.

Nested Namespaces

In C++, namespaces can also be nested i.e., one namespace inside another. The resolution of namespace variables is hierarchical.

// C++ program to demonstrate nesting of namespaces
#include <iostream>
using namespace std;
  
// Nested namespace
namespace out
{
  int val = 5; 
  namespace in
  {
      int val2 = val;    
  }
}
  
// Driver code
int main()
{
  cout << out::in::val2;   // prints 5
  return 0;
}
OUTPUT :

5
Namespace Aliasing

In C++, you can use an alias name for your namespace name, for ease of use. Existing namespaces can be aliased with new names, with the following syntax:
namespace new_name = current_name;

#include <iostream>
  
namespace name1 
{
    namespace name2 
    {
         namespace name3 
         {
             int var = 42;
         }
    }
}
  
// Aliasing 
namespace alias = name1::name2::name3;
   
int main()
{
    std::cout << alias::var << '\n';
}
Output :

42

*/









