#include <stdio.h>
int main(){
    int arr[10], n, i, sum;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    printf("Enter the elements in array: ");
    for(i=0, sum=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d is the average of elements in array", sum/n);
    return 0;
}
