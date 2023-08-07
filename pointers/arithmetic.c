#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    printf("arr pointing to address: %p\n", arr);
    printf("arr itself address: %p\n", &arr);
    printf("Size of Array: %zu\n\n", sizeof arr);

    int *ptr = arr;
    printf("Ptr pointing to address: %p\n", ptr);
    printf("Value stored at the address pointed by 'ptr': %d\n\n", *ptr);

    ptr = ptr + 2;
    printf("Ptr pointing to address: %p\n", ptr);
    printf("Value stored at the address pointed by 'ptr': %d\n\n", *ptr);

    ptr = NULL;
    printf("Ptr is NULL\n");
    printf("Ptr pointing to address: %p\n\n", ptr);
    //never dereference a null pointer


    int *ptr1 = arr;
    ptr1++;
    printf("Ptr pointing to address: %p\n", ptr1);
    printf("Value stored at the address pointed by 'ptr': %d\n\n", *ptr1);


    ptr1 = &arr[3];
    printf("Ptr pointing to address: %d\n", arr[3]);
    ptr1--;
    printf("Ptr pointing to address: %p\n", ptr1);
    printf("Value stored at the address pointed by 'ptr': %d\n", *ptr1);
}