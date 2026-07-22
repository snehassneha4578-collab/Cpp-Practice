#include<iostream>
using namespace std;
enum Day
{
	Monday,
	Tuesday,
	Wednesday
};
int main()
{
	Day today;
	today=Tuesday;
	cout<<today;
	return 0;
}