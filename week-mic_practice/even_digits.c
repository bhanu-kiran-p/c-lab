#include <stdio.h>

int main(){
    int num,flag;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(flag=1;num>0;num=num/10){
        if ((num%10)%2!=0)
            flag = 0;
    }
    if(flag==1)
        printf("all are even digits");
    else
        printf("no");

}