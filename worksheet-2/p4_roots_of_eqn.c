#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    int det;
    printf("Enter coefficients ax^2 + bx +c: ");
    scanf("%d%d%d", &a, &b, &c);
    det = (b*b) - (4*a*c);
    if(det > 0)
        printf("%d is the determinant so, distinct roots", det);
    else if(det = 0)
        printf("%d is the determinant so, equal roots", det);
    float r1 = (-b - sqrt(pow(b, 2) - 4*a*c))/2*a;
    float r2 = (-b + sqrt(pow(b, 2) - 4*a*c))/2*a;
    printf("the roots of %dx^2 + %dx + %d are %f, %f", a, b, c, r1, r2);
    return 0;
}
