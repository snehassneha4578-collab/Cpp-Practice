#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("student.txt");

    file<<"Welcome to C++ File Handling";

    file.close();

    cout<<"Data Written Successfully";

    return 0;
}
