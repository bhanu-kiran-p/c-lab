#include <stdio.h>
int main(){
    char c;
    printf("Enter c value: ");
    scanf("%c", &c);
    if(c>='a' && c <= 'z' || c >='A' && c <= 'Z'){
        if(c == 'a' || c == 'e'|| c == 'i'|| c == 'o'||c == 'u' || c == 'A' || c == 'E' || c == 'I' || c== 'O' || c == 'U')
            printf("%c is is a vowel", c);
        else
            printf("%c is a consonant", c);
    }
    else
        printf("%c is not a alphabet", c);
}
