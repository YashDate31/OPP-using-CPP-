#include<iostream>
using namespace std;

class overloading{

    public:
        int  add(int x,int y)
        {
            return x+y;
        }

        int add(int x , int y, int z)
        {
            return x+z+y;
        }
}