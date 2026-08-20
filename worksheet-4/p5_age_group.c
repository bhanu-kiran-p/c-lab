#include <stdio.h>
int main(){
    int age;
    int flag = 0;
    printf("Enter the age: ");
    scanf("%d", &age);
    if(age<18)
        printf("the person is minor\n");
    else if(age>=18 && age <=65){
        printf("the person is adult\n");
        flag = 1;
    }
    else{
        printf("the person is senior\n");
        flag = 1;
    }
    if(flag==1){
        printf("the person is eligible to vote");
    }
    else{
        printf("the person is not eligible to vote");
    }

}
