#include <stdio.h>

int main(){
    int sum, i;
    sum = 0, i= 1;
    while(i<=1000){
        if (i%3==0)
            sum += i;
        i++;
    }
    printf("the sum of every third integer from 1 to 1000 is %d", sum);
    return 0;
}
