#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, const char *argv[]){

    FILE *fp;
    fp = fopen("./4-words_alpha.txt", "r");

    int count = 0;
    char tempStr[50];
    int wordNum = 0;

    while(count != EOF){
        count = fscanf(fp, "%s ", tempStr);
        printf("%s\n", tempStr);
        wordNum++;
    }

    printf("complete num of words = %d\n", wordNum);

    return 0;
}