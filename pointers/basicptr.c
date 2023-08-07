#include <stdio.h>

int main()
{
    int num = 37;
    int *ptr;

    ptr = &num; // Assign the address of 'num' to the pointer 'ptr'

    printf("Value of 'num': %d\n", num);
    printf("Value stored at the address pointed by 'ptr': %d\n", *ptr);
    printf("Address of 'num': %p\n", &num);
    printf("Ptr pointing to address: %p\n", ptr);
    printf("Address of itself 'ptr': %p\n", &ptr);
    printf("Size of 'ptr': %zu\n", sizeof *ptr);
    printf("Size of 'num': %zu\n", sizeof num);


    *ptr = 100; // Modify the value at the address pointed by 'ptr'

    printf("New value of 'num': %d\n", num);
    printf("Logical address randomization is enabled\n");
    printf("To disable run \"sudo sysctl -w kernel.randomize_va_space=0\" \n");
    printf("To enable run \"sudo sysctl -w kernel.randomize_va_space=1\" \n");


    return 0;
}
