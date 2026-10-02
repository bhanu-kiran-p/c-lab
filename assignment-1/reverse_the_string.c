#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// int main(){
//     char a[30], p[30], ans[30];
//     int i, j, k;
//     printf("Enter the string: ");
//     gets(a);
//     for(i=strlen(a)-1, j=0, k=0;i>=0;i--){
//         if(a[i]==' '){
//             for(j=j-1;j>=0;j--,k++){
//                 ans[k] = p[j];
//             }
//             ans[k++] = ' ';
//             j = 0;
//         }
//         else{
//             p[j] = a[i];
//             j += 1;
//         }
//     }
//     for(j=j-1;j>=0;j--,k++){
//         ans[k] = p[j];
//     }
//     ans[k] = '\0';
//     printf("\nresult : %s", ans);
// }


char* reverseWords(char* a) {
    int n = strlen(a);
    char p[n];
    char* ans = (char*)malloc((n+1) * sizeof(char));
    int i, j, k;
    for(i=strlen(a)-1, j=0, k=0;i>=0;i--){
        if(a[i]==' '){
            for(j=j-1;j>=0;j--,k++){
                ans[k] = p[j];
            }
            ans[k++] = ' ';
            j = 0;
        }
        else{
            p[j] = a[i];
            j += 1;
        }
    }
    for(j=j-1;j>=0;j--,k++){
        ans[k] = p[j];
    }
    ans[k] = '\0';
    return ans;
}

int main(){
    char a[30], *ans;
    printf("Enter the string: ");
    gets(a);
    ans = reverseWords(a);
    printf("result: %s",ans);
}