#include <stdio.h>
int main(){
    int a[30], i,j, n, k, temp;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    printf("Enter array elements in sorted order: ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(i=0; i<n; i++){
        for(j=i+1; j<n;j++){
            if(a[j] == a[i]){
                // proceeed with the shifting
                for(k=j; k<n-1;k++){
                    a[j] = a[j+1];
                    n -= 1;
                }
            }
        }
    }
    for(i=0; i<n-1; i++){
        printf("%d\t", a[i]);
    }
    return 0;
    
}