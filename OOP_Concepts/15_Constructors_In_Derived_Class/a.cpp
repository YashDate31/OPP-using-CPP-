#include<iostream>
using namespace std;

class alpha
{
    public:
            int x,y;

            alpha(int a , int b)
            {
                x=a;
                y=b;
            }

            void displayA()
            {
                cout<<"x="<<x<<"y"<<y<<endl;
            }


};

class beta 
{
    public:
            int a;

            beta(int x)
            {
                a= x;

            }

            void displayB()
            {
                cout<<"bata = "<<a;
            }
};

class gamma : public alpha, public beta
{
    public:
        int  g;
        gamma(int a,int b ,int c,int d):alpha(a,b),beta(c)
        {
            g=d;
        }

        void displayC()
        {
            cout<<"Gamma = "<<g;
        }
};

int main()
{
    gamma g1(10,20,30,40);
    g1.displayA();
    g1.displayB();
    g1.displayC();

    return 0;
}

