#include<iostream>
using namespace std;

class unary{
    public:
        int x,y,z;
        void getdata()
        {
            cout<<"Enter the threee numbers";
            cin>>x>>y>>z;
        }
        
        void display()
        {
            cout<<"x="<<x<<endl<<"Y="<<y<<endl<<"z="<<z<<endl;
        }

    friend unary operator -(unary &u);

};

unary operator -(unary &u)
{
    unary temp;
    temp.x = -u.x;
    temp.y= -u.y;
    temp.z= -u.z;

    return temp;
}

int main()
{
    unary u1,u2;
    u1.getdata();
    u1.display();
    u2= -u1;
    u2.display();

    return 0;
}