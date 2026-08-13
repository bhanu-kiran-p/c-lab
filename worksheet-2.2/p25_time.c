#include <stdio.h>

// Based on entered integer value between 0-24  print  whether it is morning, evening, noon, midnight or evening
int main(){
    int n;
    printf("enter a value in 0-24: ");
    scanf("%d", &n);
    if(n== 12)
        printf("it is noon");
    else if(n == 24 || n==0)
        printf("it is mid night");
    else if(n>0 && n<12)
        printf("it is morning");
    else if(n>12 && n<24)
        printf("it is evening");
    else
        printf("invalid time entered");
    return 0;
}
