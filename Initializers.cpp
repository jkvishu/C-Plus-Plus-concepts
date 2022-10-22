/* A sample program to show the use of initializers 
 use 1: to initialize the constant data members of a class
 use 2: to initialize the reference class varaible */
 #include<iostream>
 using namespace std;
 class complex
 {
   const int a;
   int &b;
   public:
   complex(int &c):a(5),b(c)
   {
       cout<<"constructor is called\n";
   }
   void add()
   {
      b=b+a;  
   }
   void show()
   {
       cout<<"The number u inserted is added with 5\nand the result is\n";
       cout<<b<<endl;
   }
 };
 int main()
 {
     int q;
     system("clear");
     cout<<"Enter a integer  value\n";
     cin>>q;
     complex c1(q);
     c1.add();
     c1.show();
     return 0;
 }