#include<iostream>
using namespace std;
namespace A
{
	int x=50;
}
namespace B
{
	int x=100;
}
int main()
{
	cout<<A::x<<endl;
	cout<<B::x;
	return 0;
}