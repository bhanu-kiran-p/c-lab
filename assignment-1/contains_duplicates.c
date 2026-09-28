#include <stdio.h>
int duplicates(int[10], int);
int main(){
    int a[10], n, i, ans;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    ans = duplicates(a, n);
    if(ans==0)
        printf("the array does not contain the duplicates");
    else
        printf("the array contains the duplicates");
    return 0;
}
int duplicates(int a[10], int n){
    // hard core method : O(n^2) complexity
    int flag = 0, i, j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(a[i] == a[j]){
                flag = 1;
                goto last;
            }
    last : return flag;
}
