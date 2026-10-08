// C program to remove duplicates in a sorted array

#include <stdio.h>
#include <stdlib.h>
int main(){
    int*a, i, j,n, k;
    printf("Enter the no of elements: ");
    scanf("%d", &n);

    // DYNAMIC MEMORY ALLOCATION
    a = (int*)malloc(n*sizeof(int));   // casting pointers is used to store only int values
    if(a==NULL){
        printf("Memory allocatoin failed.\n");
        return 1;
    }

    // INITIALIZATION
    printf("Enter %d elements in sorted order: ", n);
    for(i=0; i<n; i++){
        scanf("%d", a+i);              // pointer expression to fetch the address
    }

    // PROCESSING
    for(i=0; i<n; i++){
        for(j=0; *(a+j) <= *(a+i); i++){
            for(k=j+1; k<n; k++){
                *(a+k) = *(a+k-1);
                n -= 1;
            }
        }
    }

    //PRINTING
    for(i=0; i<n; i++){
        printf("%d\t", *(a+i));
    }
    return 0;
}
