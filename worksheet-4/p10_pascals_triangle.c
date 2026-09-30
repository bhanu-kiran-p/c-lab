#include <stdio.h>

int main() {
    int n, i, j, d;
    int num;

    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i=0; i<n;i++){
        d = 1; 
        for(j=0; j<n-i-1; j++)
            printf(" ");
        for(j=0; j<=i; j++){
            printf("%d ", d);
            d = d*(i-j)/(j+1);
        }    
        printf("\n");
    }
    return 0;
}