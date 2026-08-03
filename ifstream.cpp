#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream file("student.txt");

    string text;

    getline(file,text);

    cout<<text;

    file.close();

    return 0;
}
