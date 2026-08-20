#include <stdio.h>
int main(){
    int mon;
    printf("enter a month integer: ");
    scanf("%d", &mon);
    if(mon>=1 && mon <=12){
        if(mon==2)
            printf("28 or 29 days for month %d", mon);
        else if(mon==1 || mon==3||mon==5||mon==7||mon==8||mon==10||mon==12)
            printf("31 days in month %d", mon);
        else
            printf("30 days in month %d", mon);
    }
    else
        printf("%d is not a month", mon);
    return 0;
}