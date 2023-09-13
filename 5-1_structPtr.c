#include<stdio.h>
#include<stdlib.h>

typedef struct dictword * pword;
struct dictword{
    char *word;
};

int main(int argc, char* argv[]){
    struct dictword *pdictword;
    FILE *fp;
    pdictword = (pword)malloc(400000*sizeof(struct dictword));
    int count = 0;
    int wcount = 0;
    fp = fopen("./4-words_alpha.txt", "r");

    while(count != EOF){
        (pdictword+wcount)->word = (char *)malloc(50);

        //อ้างถึงสมาชิกของ struct pointer ด้วยเครื่องหมาย ->
        //อ้างถึงสมาชิกของ strct ทั่วไป ด้วยเครื่องหมาย .
        count = fscanf(fp, "%s \n",  (pdictword+wcount)->word);
        //count = fscanf(fp, "%s \n", pdictword[wcount].word);
        //printf("%s\n", word[wcount]);
        wcount++;
    }

    printf("wcount = %d\n", wcount);
    for(int i = 0; i < wcount; i++){

        printf("%d %s\n", i, pdictword[i].word);
    }

    return 0;
}