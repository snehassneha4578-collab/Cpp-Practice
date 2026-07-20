#include<stdio.h>
int fun();
int var=4;
int main()
{
	int var=3;
	printf("%d",var);
	fun();
	return 0;
}
int fun()
{
	printf("%d",var);
}