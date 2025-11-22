#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream write;
    write.open("file.txt",ios::app);
    write<<"welcome yash's world";
    write.close();

    return 0;
}