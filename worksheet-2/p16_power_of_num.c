#include <stdio.h>

int main(){
    int num, ans, p, i;
    printf("Enter a number and power: ");
    scanf("%d%d", &num, &p);
    ans = 1, i=1;
    while(i<=p){
        ans = ans * num;
        i++;
    }
    printf("%d^%d = %d", num, p, ans);
    return 0;
}
