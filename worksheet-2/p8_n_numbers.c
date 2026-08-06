# include <stdio.h>
# include <math.h>

int main(){
    int n;
    printf("Enter n value: ");
    scanf("%d", &n);
    printf("the sum of first n is %d", n*(n+1)/2);
    printf("the sum of first n squares is %d", n*(n+1)*(2*n+1)/6);
    printf("the sum of first n cubes is %d", pow(n*(n+1)*(2*(n+1))/6, 2));
    return 0;
}
