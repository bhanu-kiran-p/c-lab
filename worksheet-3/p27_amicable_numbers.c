#include <stdio.h>
int main(){
    int num1, num2, sum1, sum2, i;
    printf("enter num1 and num2: ");
    scanf("%d%d", &num1, &num2);
    for(i=1, sum1=0;i<num1;i++)
        if(num1%i==0)
            sum1 += i;
    for(i=1, sum2=0; i<num2;i++)
        if(num2%i == 0)
            sum2 += i;
    if(sum1 == num2 && sum2 == num1)
        printf("%d and %d are amicable", num1, num2);
    else
        printf("%d and %d are not amicable", num1, num2);
    return 0;
}