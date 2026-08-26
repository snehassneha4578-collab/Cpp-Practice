#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream file("data.txt");

    string line;

    getline(file,line);

    cout<<line;

    file.close();

    return 0;
}
