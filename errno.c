#include <stdio.h>
#include <errno.h>
#include <string.h>
int main()
{
FILE *fp = fopen("sample.txt","r");
if(fp == NULL)
{
printf("Error: %s", strerror(errno));
}
return 0;
}
