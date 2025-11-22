#include<iostream>
using namespace std;
class abc
{
	public:
		int x,y;

		abc(int a ,int b)
		{
			x=a;
			y=b;
		}

		void display()
		{       cout<<"We are in base class contructor";
			cout<<"You have entered: "<<x<<"&"<<y<<endl;
		}


};
class pqr: public abc
{
    public:
	int o,p;
	pqr(int a, int b,int c, int d): abc(a,b)
	{
	     o=c;
	     p=d;
	}
	void display1()
	{
	     cout<<"we are in derived class and u have entered:"<<o<<"&"<<p<<endl;

	}

};

int main()
{      
	pqr d1(10,20,30,40);
	d1.display();
	d1.display1();
	return 0;
}