// c programme to check if the string is palindrome or not

#include <stdio.h>
#include <string.h>
int main(){
    char s[30];
    int i, flag = 1, n;
    printf("Enter the string: ");
    gets(s);
    n = strlen(s);
    for(i=0; i<n/2; i++)
        if(s[i]!=s[n-i-1]){
            flag = 0;
            break;
        }
    if(flag==0)
        printf("%s is not a palindrome", s);
    else
        printf("%s is a palindrome", s);
}
