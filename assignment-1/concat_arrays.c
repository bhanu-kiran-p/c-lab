#include <stdio.h>
void concat_func(int[10], int[20], int);
int main(){
    int nums[10], ans[20], n, i;
    printf("Enter the no of inputs: ");
    scanf("%d", &n);
    printf("enter the array elements: ");
    for(i=0;i<n;i++)
        scanf("%d", &nums[i]);
    concat_func(nums, ans, n);
    printf("the ans array\n");
    for(i=0;i<2*n;i++){
        printf("%d\t", ans[i]);
    }
    return 0;
}
void concat_func(int nums[10], int ans[20], int n){
    int i;
    for(i=0;i<2*n;i++){
        ans[i] = nums[i % n];
    }
}