#include<iostream>
using namespace std;
int main()
{
    int x= 89;
    int *ptr;
    ptr = &x;

    cout<<"memory address of x is "<<ptr<<"and value is  "<<*ptr;

    ptr++;
    cout<<"new address"<<ptr;

    return 0;

}