/* Datatypes in C */

#include <stdio.h>

int main()
{
    unsigned char a = 'R';
    unsigned short int b = 537;
    unsigned int c = 1000;
    unsigned long int d = 45400389750UL;
    unsigned long long int e = 389734897489387ULL;

    printf("Unsigned Char: %c\n", a);
    printf("Unsigned Char: %zu byte\n\n", sizeof a);

    printf("Unsigned Short Int: %hu\n", b);
    printf("Unsigned Short Int: %zu bytes\n\n", sizeof b);

    printf("Unsigned Int: %u\n", c);
    printf("Unsigned Int: %zu bytes\n\n", sizeof c);

    printf("Unsigned Long Int: %lu\n", d);
    printf("Unsigned Long Int: %zu bytes\n\n", sizeof d);

    printf("Unsigned Long Long Int: %llu\n", e);
    printf("Unsigned Long Long Int: %zu bytes\n", sizeof e);

    return 0;
}
