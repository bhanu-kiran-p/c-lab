#include <stdio.h>

int main(){
    int a, b;
    char c;
    printf("Enter a, b: ");
    scanf("%d%d", &a, &b);
    printf("Enter the operator: ");
    scanf(" %c", &c);
    if(c == '+')
        printf("%d + %d = %d", a, b, a+b);
    else if(c == '-')
        printf("%d = %d = %d", a, b, a-b);
    else if(c == '*')
        printf("%d * %d = %d", a, b, a*b);
    else if(c == '/')
        printf("%d / %d = %d", a, b, a/b);
    else if(c == '%')
        printf("%d % %d = %d", a, b, a%b);
    else
        printf("invalid operator");
    return 0;

}
