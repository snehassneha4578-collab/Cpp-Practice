#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("data.txt");

    file<<"Hello C++";

    file.close();

    cout<<"Data written successfully";

    return 0;
}
