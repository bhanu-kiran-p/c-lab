#include <stdio.h>
int main(){
    int arr[10],n, i, j, temp;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    printf("Enter elements in the array: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    // BUBBLE SORT
    for(i=0; i<n; i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j+1] < arr[j]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    // DISPLAYING ELEMENTS
    for(i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}
