#include <stdio.h>
struct Student
{
char name[20];
int age;
float marks;
};
int main()
{
struct Student s = {"Sneha", 21, 85.5};
printf("Name: %s\n", s.name);
printf("Age: %d\n", s.age);
printf("Marks: %.1f\n", s.marks);
return 0;
}
