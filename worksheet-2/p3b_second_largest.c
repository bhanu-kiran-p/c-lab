#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a>=b&&a>=c){
        if(b>=c)
            printf("%d is the second largest", b);
        else
            printf("%d is the second largest", c);
    }
    else if(b>=c){
        if(a>=c)
            printf("%d is the second largest", a);
        else
            printf("%d is the second largest", c);
    }
    else{
        if(b>=a)
            printf("%d is the second largest", b);
        else
            printf("%d is the second largest",a);
    }
}
