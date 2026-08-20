#include <stdio.h>
#include <math.h>
int main(){
    int num, num1, d, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    num1 = num;
    for(d=0; num>0; num=num/10)
        d++;
    num = num1;
    for(sum=0; num>0; num=num/10)
        sum += pow(num%10, d);
    if(sum==num1)
        printf("%d is a amstrong number", num1);
    else
        printf("%d is not a amstrong number", num1);
    return 0;
}