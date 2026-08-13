#include <stdio.h>

int main(){
    int p;
    printf("Enter the percentage: ");
    scanf("%d", &p);
    if(p>=95)
        printf("grade : A+");
    else if(p>=90)
        printf(grade : A);
    else if(p>=80)
        printf("grade : B");
    else if(p>=70)
        printf("grade : C");
    else if(p>=60)
        printf("grade : D");
    else if(p>=50)
        printf("grade : E");
    else
        printf("grade : F");
    return 0;
}
