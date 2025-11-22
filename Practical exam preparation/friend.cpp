#include<iostream>
using namespace std;

class calculation
{
    public:
        int x,y,sum; 
    
        void getdata()
        {
            cout<<"Enter the 2 numbers";
            cin>>x>>y;
        }
    
    friend void  exchange(calculation c1);
};
void exchange(calculation c1)
{
    int temp;
    temp= c1.x;
    c1.x=c1.y;
    c1.y=temp;
    
    cout<<"exchanged values are"<<c1.x<<c1.y;
}


int main()
{
    calculation C;
    C.getdata();
    exchange(C);

    return 0;
}