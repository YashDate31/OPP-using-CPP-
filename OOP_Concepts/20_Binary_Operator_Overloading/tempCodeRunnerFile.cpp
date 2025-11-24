#include<iostream>
using namespace std;

class Complex{
    public:
        int real, img;
        
        void getdata()
        {
            cout<<"Enter real and imaginary number "<<endl;
            cin>>real>>img;
        }

        void display()
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }

        void operator +(C