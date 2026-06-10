#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void increment(int *num)
{
    (*num)++;
}

int* maximum(int *a, int *b)
{
    if(*a > *b)
        return a;
    else
        return b;
}

int main()
{
    // Basic Pointer
    int a = 10;
    int *ptr = &a;

    printf("Basic Pointer\n");
    printf("Address of a = %p\n", (void*)ptr);
    printf("Value of a = %d\n", *ptr);

    // Pointer Arithmetic
    printf("\nPointer Arithmetic\n");
    printf("Before = %p\n", (void*)ptr);
    ptr++;
    printf("After = %p\n", (void*)ptr);

    // Swap using Pointer
    int b = 10, c = 20;

    printf("\nSwap Using Pointer\n");
    printf("Before Swap = %d %d\n", b, c);

    swap(&b, &c);

    printf("After Swap = %d %d\n", b, c);

    // Array using Pointer
    int arr[5] = {1,2,3,4,5};

    printf("\nArray Access Using Pointer\n");

    int *arr_ptr = arr;

    for(int i=0;i<5;i++)
    {
        printf("%d ", *(arr_ptr+i));
    }

    printf("\n");

    // Pointer to Pointer
    int x = 100;

    int *x_ptr = &x;
    int **xx_ptr = &x_ptr;

    printf("\nPointer To Pointer\n");
    printf("x = %d\n", **xx_ptr);

    // Function Argument Pointer
    int z = 5;

    increment(&z);

    printf("\nFunction Argument Pointer\n");
    printf("Incremented Value = %d\n", z);

    // Function Returning Pointer
    int p = 50;
    int q = 60;

    int *max = maximum(&p,&q);

    printf("\nFunction Returning Pointer\n");
    printf("Maximum = %d\n", *max);

    // Array Of Pointers
    int *ptr_arr[3];

    ptr_arr[0] = &p;
    ptr_arr[1] = &q;
    ptr_arr[2] = &z;

    printf("\nArray Of Pointers\n");

    for(int i=0;i<3;i++)
    {
        printf("%d ", *(ptr_arr[i]));
    }

    printf("\n");

    return 0;
}