#include<iostream>
using namespace std;

int main()
{
    int arr[5],*ptr;
    ptr= &arr[0];

    int i;
    cout<<"Enter the 5 numbers";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    cout<<"You have entered";
    for(i=0;i<5;i++)
    {
        cout<<*(ptr+i);
    }




}