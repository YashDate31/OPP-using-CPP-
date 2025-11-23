#include<iostream>
using namespace std;

class calculate{
        public:
            static int g;
            int weight;
            int mass,gravitation;

        void getdata()
        {
            cout<<"Enter the mass and gravitation force";
            cin>>mass>>gravitation;
        }
        void cal()
        {
            weight = g*gravitation;
            cout<<"Weight ="<<weight<<endl;
        }



};

int calculate::g = 9.8;

int main()
{
    calculate c1;
    c1.getdata();
    c1.cal();

    return 0;
}