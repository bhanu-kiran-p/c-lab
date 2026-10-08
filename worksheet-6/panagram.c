#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, flag[26], i, j;
    char *a;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    a = (char*)calloc(n, sizeof(char));
    printf("Enter the string: ");
    scanf("%s", a);
    for(i=0; i<26; i++)
        flag[i] = 0;
    for(i=0; i<26; i++){
        for(j=0; j<n; i++){
            if(*(a+i) == 'a'+i || *(a+i) == 'A'+i){
                flag[i] = 1;
                break;
            }
        }
    }
    for(i=0; i<26; i++){
        if(flag[i] == 0){
            printf("%s is Not a panagram", a);
            return 0;
        }
    }
    printf("%s is a panagram", a);
    return 0;
}
