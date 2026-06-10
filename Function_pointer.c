#include<stdio.h>

void hello()
{
    printf("Hello World\n");
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int main()
{
    // Basic Function Pointer
    void (*func_ptr)();

    func_ptr = hello;

    printf("Basic Function Pointer\n");
    func_ptr();

    // Function Pointer With Parameters
    int (*operation)(int,int);

    operation = add;

    printf("\nFunction Pointer With Parameters\n");
    printf("Addition = %d\n", operation(10,20));

    operation = sub;

    printf("Subtraction = %d\n", operation(20,10));

    // Array Of Function Pointers
    int (*operations[2])(int,int);

    operations[0] = add;
    operations[1] = sub;

    printf("\nArray Of Function Pointers\n");

    printf("Add = %d\n", operations[0](15,5));
    printf("Sub = %d\n", operations[1](15,5));

    return 0;
}