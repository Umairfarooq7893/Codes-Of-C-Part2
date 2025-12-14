// Author : Umair Farooq
// program : switch statement
#include <stdio.h>
int main() {
    int day;
    printf("Enter Day Number: ");
    scanf(" %d",& day);
// switch is useful when there are many options to choose from instead of multiple if-else.
    switch(day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid Day");
    }
    return 0;
}
