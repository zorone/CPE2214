#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    FILE *fpRead = fopen("C:/shared/Documents/CPE2214/Practice/mid-Practice1/4-words_alpha.txt", "r");
    FILE *fpWrite = fopen("./5-wordList.txt", "a");
    char str[30];
    int nLine, nWord, iWord, check;
    int nrand[] = {0, 0, 0, 0};
    scanf("%d", &nWord);

    nrand[0] = rand() % 100 + 1;
    nLine = 0;
    iWord = 0;

    for(int i=0; iWord<nWord; i++){
        if(check == EOF){
            fpRead = fopen("C:/shared/Documents/CPE2214/Practice/mid-Practice1/4-words_alpha.txt", "r");
            check = 0;
        }

        check = fscanf(fpRead, "%s ", str);

        if(i == 0){
            nrand[1] = rand() % 100 + 1;
            nLine = nrand[0]*nrand[1];
            nrand[2] = rand() % 10 + 1;
            nLine *= nrand[2];
            nrand[3] = rand() % 10 + 1;
            nLine *= nrand[3];
        }

        if(nLine){
            nrand[1] = rand() % 100 + 1;
            nLine -= 1;
            nrand[3] = rand() % 10 + 1;
            continue;
        }else {
            nrand[0] = rand() % 100 + 1;
            nLine = nrand[0]*nrand[1]*nrand[2]*nrand[3];
            nrand[2] = rand() % 10 + 1;
        }

        fprintf(fpWrite, "%s\n", str);
        iWord++;
    }

    fclose(fpRead);
    fclose(fpWrite);

    return 0;
}

