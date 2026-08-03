#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("student.txt",ios::app);

    file<<"\nLearning File Handling";

    file.close();

    cout<<"Data Appended";

    return 0;
}

