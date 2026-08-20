#include <stdio.h>
int main(){
    char c;
    printf("enter a upper case alphabet: ");
    scanf("%c", &c);
    if(c>=65 && c<=90)
        printf("%c in lower case: %c",c, c+32);
    else
        printf("%c is not a upper case alpha", c);
    return 0;
}