#include <stdio.h>

int main(){
    int i, j, k, count;
    printf("Enter the range i, j: ");
    scanf("%d%d", &i, &j);
    for(;i<=j;i++){
        count = 0;
        for(k=1; k<=i; k++){
            if(i%k==0)
                count ++;
        }
        if (count == 2)
            printf("%d\t", i);
    }
    return 0;
}
