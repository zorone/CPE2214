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

    nLine = rand() % 100 + 1;

    for(int i=0; i<nWord; i++){
        if(check == EOF){
            fpRead = fopen("./4-words_alpha.txt", "r");
            check = 0;
        }

        check = fscanf(fpRead, "%s ", str);

        if(nLine){
            nLine -= 1;
            continue;
        }else {
            nLine = rand() % 100 + 1;
        }

        fprintf(fpWrite, "%s\n", str);
    }

    fclose(fpRead);
    fclose(fpWrite);

    return 0;
}

