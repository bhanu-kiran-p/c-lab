#include <stdio.h>
#include <stdlib.h>
int main(){
    int *a = (int*)malloc(3*sizeof(int));
    printf("address of dynamic array\n");
    printf("%u\n", a);
    printf("%x\n", a);
    printf("%p\n", a);
    printf("---\n");
    printf("address 2nd element in dnamic array\n");
    a++;
    printf("%u\n", a);
    printf("%x\n", a);
    printf("%p\n", a);

}
