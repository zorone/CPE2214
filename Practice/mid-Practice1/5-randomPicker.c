#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    FILE *fpRead = fopen("C:/shared/Documents/CPE2214/Practice/mid-Practice1/4-words_alpha.txt", "r");
    FILE *fpWrite = fopen("./5-wordList.txt", "a");
    char str[30];
    int nLine, rand1, rand2, nWord, check;
    scanf("%d", &nWord);

    rand1 = rand() % 100 + 1;
    nLine = 0;

    for(int i=0; i<nWord; ){
        if(check == EOF){
            fpRead = fopen("C:/shared/Documents/CPE2214/Practice/mid-Practice1/4-words_alpha.txt", "r");
            check = 0;
        }

        check = fscanf(fpRead, "%s ", str);

        if(i == 0){
            rand2 = rand() % 100 + 1;
            nLine = rand1*rand2;
        }
        
        if(nLine){
            rand2 = rand() % 100 + 1;
            nLine -= 1;
            continue;
        }else {
            rand1 = rand() % 100 + 1;
            nLine = rand1 * rand2;
        }

        fprintf(fpWrite, "%s\n", str);
        i++;
    }

    fclose(fpRead);
    fclose(fpWrite);

    return 0;
}

