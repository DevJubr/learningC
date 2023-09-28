#include <stdio.h>

int main() {
    int dayNumber = 1;

    switch (dayNumber) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid day number\n");
            break;
    }

    return 0;
}

//  -  We use a variable dayNumber to represent the day you want to map.
//  -  The switch statement evaluates the value of dayNumber.
//  -  Each case label corresponds to a specific day number from 1 to 7.
//  -  Depending on the value of dayNumber, the corresponding day name will be printed.
//  -  If dayNumber does not match any of the specified cases, the default case will execute and print "Invalid day number."