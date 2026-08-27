#include <stdio.h>
int main(){
    int arr[20], n, i;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    printf("Enter the elements in the array: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("\nthe elements in array are: ");
    for(i=0; i<n; i++)
        printf("%d\t", arr[i]);
    return 0;

}
