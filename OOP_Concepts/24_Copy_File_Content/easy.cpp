#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    char ch;
    ifstream fin;

    fout.open("yash.txt");
    fin.open("Theory.md");

    if(!fin)
    {
        cout<<"NO file found"<<endl;
    }

    while(!fin.eof())
    {
        fin.get(ch);
        
        fout<<ch;

    }
        return 0;

}