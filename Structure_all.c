#include<stdio.h>

struct Student
{
    int roll_no;
    int age;
};

int main()
{
    struct Student s = {101,22};

    printf("Structure Example\n");
    printf("Roll No = %d\n", s.roll_no);
    printf("Age = %d\n", s.age);

    struct Student *ptr = &s;

    printf("\nStructure Pointer Example\n");

    printf("Roll No = %d\n", ptr->roll_no);
    printf("Age = %d\n", ptr->age);

    printf("Address of Structure = %p\n", (void*)ptr);
    printf("Size of Structure = %zu bytes\n", sizeof(struct Student));

    return 0;
}