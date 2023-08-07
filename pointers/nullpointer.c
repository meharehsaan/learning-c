#include <stdio.h>

// # define NULL ((void*)0)   //defined in stdio.h (Macro)

int main()
{

    int *ptr1 = 0;
    int *ptr2 = ((int *)0);
    int *ptr3 = '\0';

    int *ptr = NULL;

    if (ptr != NULL) //if(ptr)
    {
        printf("Pointer is not NULL.\n");
    }
    else
    {
        printf("Pointer is NULL.\n");
    }

    return 0;
}
