#include <stdio.h>

int main()
{

    // Pointer to non-constant data             **(can modify pointer and data)**
    int *ptr;
    int num = 37;
    ptr = &num;

    printf("Ptr address: %p\n", ptr);
    printf("Can modify data: %d\n", ++(*ptr));
    printf("Can modify pointer: %p\n\n", ++ptr);

    // Pointer to const data                   **(can modify pointer not data)**
    const int *ptr1;
    int num1 = 40;
    ptr1 = &num1;

    printf("Ptr address: %p\n", ptr1);
    // printf("Can't modify data: %d\n", ++(*ptr1));
    printf("Can modify pointer: %p\n\n", ++ptr1);

    // Constant Pointer to non-constant data   **(can modify data not pointer)**
    int num2 = 50;
    int *const ptr2 = &num2;

    printf("Ptr address: %p\n", ptr2);
    printf("Can modify data: %d\n\n", ++(*ptr2));
    // printf("Can't modify pointer: %p\n\n", ++ptr2);

    // Constant pointer to constant data       **(can't modify pointer & data)**
    int num3 = 50;
    const int *const ptr3 = &num3;

    printf("Ptr address: %p\n", ptr3);
    // printf("Can't modify data: %d\n", ++(*ptr3));
    // printf("Can't modify pointer: %p\n", ++ptr2);
}