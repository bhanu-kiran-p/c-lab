// c program to revese the string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int n, i;
    char *s, temp;
    printf("Enter the length of string: ");
    scanf("%d", &n);
    s = (char*)calloc(n,sizeof(char));
    if(s==NULL){
        printf("Memory allocation failed.");
        return 1;
    }
    printf("Enter the string: ");
    scanf("%s", s);
    n = strlen(s);
    for(i=0; i<n/2; i++){
        temp = *(s+i);
        *(s+i) = *(s+n-i-1);
        *(s+n-i-1) = temp;
    }
    puts(s);
    return 0;
}
