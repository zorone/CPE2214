#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, const char *argv[]){

    int maxNum = 40000;
    FILE *fp;
    char *pword[maxNum];
    int count = 0;
    int wcount = 0;
    char tempStr[50];

    fp = fopen("./4-words_alpha.txt", "r");

    while(count != EOF){
        count = fscanf(fp, "%s ", tempStr);
        pword[wcount] = (char *)malloc(strlen(tempStr));
        strcpy(pword[wcount], tempStr);

        printf("%s\n", pword[wcount]);
        wcount++;

    }

    printf("wcount = %d\n", wcount);

    return 0;
}