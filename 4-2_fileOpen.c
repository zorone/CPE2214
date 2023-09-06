#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, const char *argv[]){

    FILE *fp;
    fp = fopen("./4-words_alpha.txt", "r");

    int count = 0;
    char tempStr[50];
    char words[400000][50];
    int wordNum = 0;

    while(count != EOF){
        count = fscanf(fp, "%s ", tempStr);
        printf("%s\n", tempStr);
        if(count != EOF){
            strcpy(words[wordNum], tempStr);
            wordNum++;
        }
        if(wordNum >= 100000){
            break;
        }

    }
    for(int i = 0; i < wordNum; i++){
        printf("%s\n", words[i]);
    }

    printf("complete num of words = %d\n", wordNum);

    return 0;
}