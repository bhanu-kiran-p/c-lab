#include <stdio.h>
int main(){
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);
    if(age > 0)
        if(age > 18)
            printf("the person is eligible for voting");
        else if(age < 18)
            printf("the person is not eligible for voting");
    else
        printf("age cannot be negative");
    return 0;
}
