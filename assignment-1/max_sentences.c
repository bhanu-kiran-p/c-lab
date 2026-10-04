#include <stdio.h>
int mostWordsFound(char**, int);
int main(){
    char sentences[50][50];
    int i, n, result;
    printf("Enter no of sentences: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("enter sentence %d", i+1);
        gets(sentences[i]);
    }
    result = mostWordsFound(sentences, n);
    printf("max words : %d", result);
}

int mostWordsFound(char** sentences, int sentencesSize) {
    int max, i, j, count;
    max = 0;
    for(i=0; i<sentencesSize; i++){
        count = 0;
        for(j=0; sentences[i][j]!='\0';j++){
            if(sentences[i][j] == ' ')
                count += 1;
        }
        count += 1;
        if(count > max)
            max = count;
    }
    return max;
}