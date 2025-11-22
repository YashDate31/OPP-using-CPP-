#include<iostream>
using namespace std;
class animal{
    public:
        virtual void sounds()=0;
};

class dog :public animal{
    public:

        void sound()
        {
            cout<<"dog says whoa whoau"<<end;
        }
    };

class cat: public animal{
    public:
            void sound()
            {
            cout<<"cat says meawwu";

            }
};

int main (){

    animal ptr1;
    pt1->show();

    return 0;
}