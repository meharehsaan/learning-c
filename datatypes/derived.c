#include <stdio.h>

/* Struct Delecration */
struct Person
{
    char name[50];
    int age;
};

/* Union Delecration */
union Number
{
    int intValue;
    float floatValue;
};

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};

    printf("Array elements: ");
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", numbers[i]);
    }
    printf("Size of array %zu\n", sizeof numbers);
    printf("\n");

    /* Structure */

    struct Person person1 = {"Ehsaan", 30};

    printf("\n");
    printf("Name: %s\n", person1.name);
    printf("Size of name var: %zu\n", sizeof person1.name);
    printf("Age: %d\n", person1.age);
    printf("Size of age var: %zu\n", sizeof person1.age);
    printf("Total Struct Size: %zu\n", sizeof person1);
    printf("\n");

    point();

    unionfunc();

    return 0;
}

int point() // pointer
{
    int a = 10;
    int *ptr;

    ptr = &a;
    printf("Value of a: %d\n", a);
    printf("Value of a using pointer (derefrencing) : %d\n", *ptr);
    printf("Address of pointer : %p\n", ptr);

    return 0;
}

int unionfunc() // union datatype like struct
{
    union Number num;

    printf("\n");
    num.intValue = 10;
    printf("Int Value: %d\n", num.intValue);
    printf("Int Size: %zu\n", sizeof num.intValue);

    num.floatValue = 3.14;
    printf("Float Value: %f\n", num.floatValue);
    printf("Float Size: %zu\n", sizeof num.floatValue);

    printf("Total Union Size: %zu\n", sizeof num);

    return 0;
}
