#include <stdio.h>
int main(){
    int year;
    printf("enter the year: ");
    scanf("%d", &year);
    if(year%400==0)
        printf("it is a leap year");
    else if (year%100==0)
        printf("it is not a leap year");
    else if(year%4==0)
        printf("it is a leap year");
    else
        printf("it is not a leap year");
    return 0;
}