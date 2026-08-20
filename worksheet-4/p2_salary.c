#include <stdio.h>
int main(){
    int years;
    float hra, da, bonus, salary;
    printf("enter the employee salary: ");
    scanf("%f", &salary);
    printf("enter the working years: ");
    scanf("%d", &years);
    if(years > 15){
        hra = salary*0.25;
        da = salary * 0.10;
        bonus = 1500;
    }
    else{
        hra = da = bonus = 0;
    }
    printf("salary : %d\nHRA : %d\nDA : %d\nBonus : %d", salary, hra, da, bonus);
}
