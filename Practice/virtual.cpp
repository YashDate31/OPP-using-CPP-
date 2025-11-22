#include<iostream>
using namespace std;
class animal{
    public:
        virtual void sounds()=0;
};

class dog :public animal{
    public:

        void sounds()
        {
            cout<<"dog says whoa whoau";
        }
    };

class cat : public animal
{
    public:
        void sounds()
        {
            cout<<"myauuu"<<endl;
        }
};
int main (){


    animal *aptr;
    dog d1;
    cat c1;

    aptr= &d1;
    aptr->sounds();
    
    aptr= &c1;
    aptr->sounds();
    return 0;
}