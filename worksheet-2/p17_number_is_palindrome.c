#include <stdio.h>

int main(){
    int num, orig, sum;
    printf("enter a number: ");
    scanf("%d", &num);
    orig = num;
    sum = 0;
    while(num>0){
        sum = sum*10 + num %10;
        num /= 10;
    }
    if(sum==orig)
        printf("%d is a palindrome", orig);
    else
        printf("%d is not a palindrome", orig);
}
