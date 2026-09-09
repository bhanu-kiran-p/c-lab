 
#include <stdio.h> 
int main() 
{ 
    int n; 
    printf("enter number"); 
    scanf("%d",&n); 
    if(n%2==0) 
         goto even; 
    else  
         goto odd; 
    even: 
        printf("%d is even",n); 
        return 0; 
    odd: 
        printf("%d is odd",n); 
    return 0; 
} 