/* A sample program to show the conversion from primitive type to class type
NOTE:- this type of conversion is implemented through constructor*/
#include<iostream>
using namespace std;
class complex
{
    int a,c,b;
    public:
    complex()
    {
        cout<<"default constructor is called\n";
    }
    void insert(int i)
    {
        a=i;
    }
    void call()
    {
        c=a*b;
    }
    complex(int k)
    {
        cout<<"copy constructor is called\n";
        b=k;
    }
    void show()
    {
        cout<<"The product of two number is\n";
        cout<<"c= "<<c<<endl;
    }
    ~complex()
    {
        cout<<"destructor is called now\n";
    }
};
int main()
{
    int i,j;
    system("clear");
    cout<<"enter two integer number\n";
    cin>>i>>j;
    /*complex c1;
    c1.insert(i);
    c1=j;  ase krne pr hoga kya ki phle c1 object bnega to default constructor call hoga and object bnte hi usse related varaibles ko memory mil zaygi
    uske baad insert function ko call krega and zb c1=j ayga to copy constructor bnega mtlb ki compiler ko ye lega ki pichle object ka kaam khatam ho gya ha isiliye wo c1 ke liye destructor ko call krdega and uske baad wo phir copy constructor ko krega call
    isee hoga ye ki zo object ke varaible ko memory milti thi ya zo unke andar data tha wo release ya delete ho zayga object ke dele hone ki wza se or phir wrong output ayga */
    complex c1=j; //isilye hm object ke bnte hi usse primitive data type varaible is initilaize krdenge zise wo sirf 1 constructor call kre or wo ho copy constructor and kaam asan ho zaye.
    c1.insert(i);
    c1.call();
    c1.show();
    return 0;
}