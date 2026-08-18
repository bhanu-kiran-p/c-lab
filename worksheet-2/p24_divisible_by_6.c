// .write  a program to check whether a number is divisible by 6 or not…if not make it divisible by 6..then figure out sum of  next  5 numbers that are divisible by 6
#include <stdio.h>

int main(){
    int num, r, i;
    printf("enter a number: ");
    scanf("%d", &num);
    r = num / 6 + 1;
    if (r==0)
        printf("%d is divisible by 6", num);
    else{
        printf("%d is not divisible by 6\n", num);
        num = num + r;
        printf("%d is divisible by 6", num);
        printf("\nthe next 5 numbers divisible by 6 are\n");
        for(i=1; i<=5; i++)
            printf("%d\t", num + 6*i);
    }
    return 0;
}
