/* Enums help improve code readability, maintainability, and robustness. They are a powerful tool to create self-documenting and expressive code by giving meaningful names to related integer constants. */

#include <stdio.h>

enum WeekDays
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main()
{

    enum WeekDays today = FRIDAY;

    switch (today)
    {
    case MONDAY:
        printf("Today is Monday.\n");
        break;
    case TUESDAY:
        printf("Today is Tuesday.\n");
        break;
    case WEDNESDAY:
        printf("Today is Wednesday.\n");
        break;
    case THURSDAY:
        printf("Today is Thursday.\n");
        break;
    case FRIDAY:
        printf("Today is Friday.\n");
        break;
    case SATURDAY:
        printf("Today is Saturday.\n");
        break;
    case SUNDAY:
        printf("Today is Sunday.\n");
        break;
    }

    return 0;
}
