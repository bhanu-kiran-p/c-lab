#include <stdio.h>
int main(){
    int arr[10], i, n, j, mid, target, flag;
    printf("Enter no of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements in array: );
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    // BINARY SEARCH
    printf("Enter the target: ");
    scanf("%d", &target);
    i = 0;
    j = n-1;
    flag = 0;
    while(i<=j){
        mid = (i+j) / 2;
        if(arr[mid] == target){
            flag = 1;
            break;
        }
        else if(arr[mid] < target){
            i = mid + 1;
        }
        else{
            j = mid - 1;
        }
    }
    if(flag==1){
        printf("%d found at %d", target, i);
    }
    else{
        printf("%d not found", target);
    }
    return 0;

}
