#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("student.txt");

    file<<"Name : Sneha"<<endl;

    file<<"CGPA : 8.6";

    file.close();

    return 0;
}
