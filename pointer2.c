#include<stdio.h>
int main()
{
	int x=10;
	int*p=&x;
	printf("Value of X=%d\n",x);
	printf("Value stored at pointer=%d\n",*p);
	return 0;
}