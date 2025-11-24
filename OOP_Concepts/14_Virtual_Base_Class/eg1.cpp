#include<iostream>
using namespace std;
class master
{
    public:
        char name[100];
        int code;

        void getdata()
        {
            cout<<"Enter the name "<<endl;
            cin>>name;

            cout<<"Enter the code"<<endl;
            cin>>code;
        }

        void putdata()
        {
            cout<<"Name= "<<name<<endl;
            cout<<"Code= "<<code<<endl;
        }
};

class amount :virtual public master
{
    public:
            int basic_pay;

            void getdata1()
            {
                cout<<"Enter the basic pay: "<<endl;
                cin>>basic_pay;
            }

            void putdata1()
            {
                cout<<"Basic Pay= "<<basic_pay<<endl;
            }
};

class admin : virtual public master
{
    public:
            int experience;
            void getdata2()
            {
                cout<<"Enter the experience: "<<endl;
                cin>>experience;

            }

            void putdata2()
            {
                cout<<"Experience ="<<experience<<endl;

            }
};

class employee : public admin , public amount
{
    public:
            int gross_sal;
            void getdata3()
            {
                cout<<"Enter the gross salary "<<endl;
                cin>>gross_sal;

            }

            void putdata3()
            {
                cout<<"Gross salary ="<<gross_sal;

            }
};


int main()
{
    employee e1;
    e1.getdata();
    e1.getdata1();
    e1.getdata2();
    e1.getdata3();

    e1.putdata();
    e1.putdata1();
    e1.putdata2();
    e1.putdata3();


    return 0;
}