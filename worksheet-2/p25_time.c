#include <stdio.h>

int main() {
    int hour;

    printf("Enter an integer between 0 and 24: ");
    scanf("%d", &hour);

    if (hour < 0 || hour > 24) {
        printf("Invalid input! Please enter between 0 and 24.\n");
    } else {
        if (hour == 0 || hour == 24) {
            printf("It is Midnight.\n");
        } else if (hour >= 1 && hour <= 11) {
            printf("It is Morning.\n");
        } else if (hour == 12) {
            printf("It is Noon.\n");
        } else if (hour >= 13 && hour <= 17) {
            printf("It is Afternoon/Evening.\n");
        } else {
            printf("It is Night/Evening.\n");
        }
    }

    return 0;
}
