#include<iostream>
using namespace std;

class object{
    public:
    int x;
    void getdata()
    {
        cout<<"Enter the value"<<endl;
        cin>>x;
    }
    void putdata()
    {
        cout<<"="<<x<<endl;
    }
};

int main()
{
    object a[3],*aptr;
    aptr = &a[0];

    for(int i=0;i<3;i++)
    {
        (aptr+i)->getdata();
    }

    for(int i=0;i<3;i++)
    {
        (aptr+i)->putdata();
    }

    return 0;
}