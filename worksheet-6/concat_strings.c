// add two strings

#include <stdio.h>
#include <string.h>
int main(){
    char str1[30], str2[20];
    int i, j, k;
    printf("Enter the string 1:");
    scanf("%[^\n]s", str1);
    getchar();
    printf("Enter the string 2: ");
    scanf("%[^\n]s", str2);
    for(k=0; str1[k]!='\0'; k++);
    for(i=0; str2[i]!='\0'; i++)
        str1[k++] = str2[i];
    str1[k] = '\0';
    printf("%s\n", str1);

    // using built in functions
    printf("using built in functions");
    strcat(str1, str2);
    puts(str1);
    puts(str2);

}
