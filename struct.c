#include <stdio.h>

struct Student

{

int id;

char name[20];

};

int main()

{

struct Student s = {101, "Sneha"};

printf("ID = %d\n", s.id);

printf("Name = %s", s.name);

return 0;

}