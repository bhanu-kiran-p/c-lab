#include <stdio.h>
int main(){
    int arr[20], max, n, i;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for(i=1; i < n; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    printf("%d is the largest element in arr", max);
    return 0;

}
