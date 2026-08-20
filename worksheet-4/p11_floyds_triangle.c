#include <stdio.h>
int main(){
    int n = 5, count, i, j;
    for(i=1,count=1;i<=n;i++){
        for(j=1;j<=i;j++)
            printf("%d ", count++);
        printf("\n");
    }
}
