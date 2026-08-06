#include <stdio.h>
int main(){
    // check whether the number is even or odd
    int a;
    printf("Enter a value: ");
    scanf("%d", &a);
    if(a<0)
        printf("%d cannot be positive", a);
    else if (a%2 == 0)
        printf("%d is a even number", a);
    else
        printf("%d is a odd number", a);
    return 0;
}
