#include <stdio.h>
int main(){
    int i, j, n;
    n = 10;
    printf("MULTIPLICATION TABLE\n");
    printf("--------------------------------------------------------------------------------------------------\n");
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            printf("%d\t", i*j);
        }
        printf("\n");
    }
}
