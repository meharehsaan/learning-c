/* Datatypes in C */

#include <stdio.h>

int main()
{
    float pi = 3.14159f;
    double e = 2.718281828459045;
    long double sqrt = 1.414213562373095048801688724209698L;

    printf("Float: %f\n", pi);
    printf("Float: %zu\n\n", sizeof pi);

    printf("Double: %lf\n", e);
    printf("Double: %zu\n\n", sizeof e);

    printf("Long Double: %Lf\n", sqrt);
    printf("Long Double: %zu\n", sizeof sqrt);

    return 0;
}
