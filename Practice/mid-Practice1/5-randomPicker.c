#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    FILE *fpRead = fopen("./4-words_alpha.txt", "r");
    FILE *fpWrite = fopen("./5-wordList.txt", "a");
    char str[30];
    int nLine, nWord, check;
    scanf("%d", &nWord);

    for(int i=0; i<nWord; i++){
        if(check == EOF){
            fpRead = fopen("./4-words_alpha.txt", "r");
            check = 0;
        }

        nLine = rand() % 100 + 1;

        check = fscanf(fpRead, "%s ", str);

        if(nLine){
            nLine -= 1;
            continue;
        }

        fprintf(fpWrite, "%s\n", str);
    }

    fclose(fpRead);
    fclose(fpWrite);

    return 0;
}

