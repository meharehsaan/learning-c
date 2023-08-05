/*  Datatypes in c
    To print sizeof we use format specifier %zu

    The sizeof operator returns the size of a data type or variable in bytes,
    and the size may vary depending on the architecture of the system you are
    running the program.

    The sizeof operator returns a value of type size_t.
 */

#include <stdio.h>

int main()
{
    char a = 'E';
    short int b = 537;
    int c = 537000;
    long int d = 45400000L;
    long long int e = 92398934574LL;

    printf("Char: %c\n", a);
    printf("Char: %zu byte\n\n", sizeof a); // sizeof tells the variable size int integer

    printf("Short Int: %hd\n", b);
    printf("Short Int: %zu bytes\n\n", sizeof b);

    printf("Int: %d\n", c);
    printf("Int: %zu bytes\n\n", sizeof c);

    printf("Long Int: %ld\n", d);
    printf("Long Int: %zu bytes\n\n", sizeof d);

    printf("Long Long Int: %lld\n", e);
    printf("Long Long Int: %zu bytes\n", sizeof e);

    return 0;
}
