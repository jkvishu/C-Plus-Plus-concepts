/*Overloading of insertion and extraction operators using friend function
 i.e. another way of accessing private data members of a class and inserting values inside them.*/
 #include<iostream>
 using namespace std;
 class complex 
 {
     int a,b;
     public:
     friend ostream& operator<<(ostream&,complex);
     friend istream& operator>>(istream&,complex&);
 };
 ostream& operator<<(ostream &bhar_ao,complex c)
 {
     cout<<"Values are\n";
     bhar_ao<<"\nc= "<<c.a<<endl;
     bhar_ao<<"\nc= "<<c.b<<endl;
     return bhar_ao;
 }
 istream& operator>>(istream &andar_ao,complex &c)
 {
     cout<<"Enter values\n";
     andar_ao>>c.a>>c.b;
     return andar_ao;
 }
 int main()
 {
     complex c1;
     cin>>c1;
     cout<<c1;
 }