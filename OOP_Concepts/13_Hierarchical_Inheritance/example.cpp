#include<iostream>
using namespace std;

class staff
{
    public:
        int code;
        void getdata()
        {
            cout<<"Enter the code"<<endl;
            cin>>code;
        }
        void display()
        {
            cout<<"Code = "<<code<<endl;
        }
};

class teacher : public staff
{
        public:
                char subject[50];

                void getdata1()
                {
                    cout<<"Enter the subject"<<endl;
                    cin>>subject;
                }
                void display1()
                            {
                             cout<<"Subject= "<<subject<<endl;
                            } 
};

class officer : public staff{
    public:
            char grade[5];

            void getdata2()
            {
            cout<<"Enter the grade "<<endl;
            cin>>grade;
            }

            void putdata2()
            {
                cout<<"Grade ="<<grade;
            }

};

int main()
{
    teacher t1;
    officer o1;
    t1.getdata();
    t1.getdata1();
    o1.getdata2();

    t1.display();
    t1.display1();
    o1.putdata2();


    return 0;
}