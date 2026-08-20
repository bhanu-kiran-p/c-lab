#include <stdio.h>
int main(){
    int a, b, ans;
    char c;
    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);
    printf("Enter the operator: ");
    scanf(" %c", &c);
    switch(c){
    case '+':
        ans = a + b;
        printf("%d %c %d = %d", a, c, b, ans);
        break;
    case '-':
        ans = a - b;
        printf("%d %c %d = %d", a, c, b, ans);
        break;
    case '*':
        ans = a * b;
        printf("%d %c %d = %d", a, c, b, ans);
        break;
    case '/':
        ans = a/ b;
        printf("%d %c %d = %d", a, c, b, ans);
        break;
    case '%':
        ans = a % b;
        printf("%d %c %d = %d", a, c, b, ans);
        break;
    default:
        printf("invalid operator");
    }
    return 0;
}
