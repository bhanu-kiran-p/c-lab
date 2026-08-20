#include <stdio.h>
int main(){
    int n, temp, rev, r;
    printf("Enter n value: ");
    scanf("%d", &n);
    for(temp=n, rev=0; temp >0; temp /=10){
        rev = rev *10 + temp % 10;
    }
    for(temp = rev; temp > 0; temp /= 10){
        r = temp % 10;
        switch(r){
            case 1:
                printf("one\t");
                break;
            case 2:
                printf("two\t");
                break;
            case 3:
                printf("three\t");
                break;
            case 4:
                printf("four\t");
                break;
            case 5:
                printf("five\t");
                break;
            case 6:
                printf("six\t");
                break;
            case 7:
                printf("seven\t");
                break;
            case 8:
                printf("eight\t");
                break;
            case 9:
                printf("nine\t");
                break;
            default:
                printf("zero\t");
        }

    }

}
