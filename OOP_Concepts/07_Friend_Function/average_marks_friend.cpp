#include<iostream>
using namespace std;

class test2;
class test1{

    public:
        int math1,science1,eng1,avg1;
        void getdata()
        {
            cout<<"Enter the marks of maths, science and english respectively"<<endl;
            cin>>math1>>science1>>eng1;
        }

        void putdata()
        {
            avg1=(math1+science1+ eng1)/2;
            cout<<"avg of 1st test is "<<avg1;
        }

        friend void avg(test1 t1,test2 t2);

};

class test2{

    public:
        int math2,science2,eng2,avg2;
        void getdata1()
        {
            cout<<"Enter the marks of maths, science and english respectively"<<endl;
            cin>>math2>>science2>>eng2;
        }

          void putdata1()
        {
          avg2=  (math2+science2+ eng2)/3;
            cout<<"avg of 1st test is "<<avg2;
        }

        friend void avg(test1 t1,test2 t2);


};

     void avg(test1 t1,test2 t2){

        int avg3;
        avg3 = t1.avg1 + t2.avg2;
        cout<<"The Avg of 2 tests is "<<avg3;

     }

    int main()
    {
        test1 t1;
        test2 t2;
        t1.getdata();
        t1.putdata();
        t2.getdata1();
        t2.putdata1();
        avg(t1,t2);
        return 0;
    }
