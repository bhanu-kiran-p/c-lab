#include <stdio.h>

int main(){
    int n1, n2, hcf, i;
    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);
    i = 1;
    do{
        if(n1%i==0 && n2%i==0)
            hcf = i;
            i += 1;
    }while(i<=n1 && i<=n2);
    printf("the hcf of %d and %d is %d", n1, n2, hcf);
    return 0;
}
