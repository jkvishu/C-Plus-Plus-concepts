// A class inside a class is known as nested class
// the enclosing class cannot access any member of its nested class but nested class is a member of a class so it can access all the members as same as class members do.
#include <iostream>
using namespace std;
class sports
{
public:
    class cricket // nested class 
    {
        int vote;

    public:
        void insert(int i)
        {
            vote = vote + i;
        }
        void show()
        {
            cout << "No of votes for cricket\n";
            cout << vote << endl;
        }
    };
    class football // nested class
    {
        int vote;

    public:
        void insert(int i)
        {
            vote = vote + i;
        }
        void show()
        {
            cout << "No of votes for football\n";
            cout << vote << endl;
        }
    };
};
int main()
{
    sports::cricket c1;
    sports::football f1;
    int ch;
    system("clear");
    cout << "press 1 for cricket and 2 for footabll and 3 for exit\n";
    while (ch != 3)
    {
        cin >> ch;
        switch (ch)
        {
        case 1:
            c1.insert(1);
            break;
        case 2:
            f1.insert(1);
            break;
        case 3:
              cout<<"exit\n";
              break;
        default:
            cout << "wrong choice please try again by pressing the correct button\n";
            break;
        }
        if(ch!=3)
        {
        cout<<"Next\n";
        }
    }
    c1.show();
    f1.show();
}