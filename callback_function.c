#include<stdio.h>

void displaySuccess()
{
    printf("Task Completed Successfully\n");
}

void displayFailure()
{
    printf("Task Failed\n");
}

void executeTask(int status, void (*callback)())
{
    if(status)
    {
        callback();
    }
}

int main()
{
    printf("Callback Function Example\n");

    executeTask(1, displaySuccess);

    executeTask(1, displayFailure);

    return 0;
}