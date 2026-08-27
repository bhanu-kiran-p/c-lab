#include <stdio.h>
int main(){
    int arr[20], max, n, i, min;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i=1; i < n; i++){
        if(arr[i] > max)
            max = arr[i];
        else if (arr[i] < min)
            min = arr[i];
    }
    printf("%d is the maximum element in arr\n", max);
    printf("%d is the minimum element in arr", min);
    return 0;

}
