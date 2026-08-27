#include <stdio.h>
int main(){
    int n, i, j;
    n = 5;
    for(i=1; i<=n; i++){
        for(j=1; j<i; j++){
            printf(" ");
        }
        for(j=1; j<=2*(n-i)+1; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    for(i=1; i<=n-1; i++){
        for(j=1; j<=n-i-1; j++){
            printf(" ");
        }
        for(j=1; j<=2*i+1; j++){
            printf("%d", j);
        }
        printf("\n");
    }
}
