#include <stdio.h>
int main(){
    int a, b;
    printf("enter two values: ");
    scanf("%d%d", &a, &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("the values after change are %d and %d", a, b);
    return 0;
}