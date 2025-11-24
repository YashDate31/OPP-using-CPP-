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

        Complex operator +(Complex &c)
        {
            Complex temp;

            temp.real  = real + c.real;
            temp.img = img + c.img;

            return temp;
        }

    
};

int main()
{
    Complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3 = c1 + c2;
    c3.display();


    return 0;
}
