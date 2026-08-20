#include <stdio.h>
int main(){
    int r1, r2, i, j, sum=0;
    printf("enter range r1 and r2: ");
    scanf("%d%d", &r1, &r2);
    for(i=r1; i<=r2; i++){
        for(j=i, sum=0; j>0; j=j/10){
            sum = sum*10 + j%10;
        }
        if (sum == i)
            printf("%d\t", i);
    }
    return 0;
}
