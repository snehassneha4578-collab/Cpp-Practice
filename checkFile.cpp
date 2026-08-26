#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream file("data.txt");

    if(!file)
    {
        cout<<"File could not be opened";
    }
    else
    {
        cout<<"File opened successfully";
    }

    file.close();

    return 0;
}
