#include<stdio.h>
#include<stdlib.h>

struct dictword{
    char *word;
};

int main(int argc, char* argv[]){
    struct dictword *pdictword;
    FILE *fp;
    pdictword = (struct dictword *)malloc(400000*sizeof(struct dictword));
    int count = 0;
    int wcount = 0;
    fp = fopen("./4-words_alpha.txt", "r");

    while(count != EOF){
        (pdictword+wcount)->word = (char *)malloc(50);
        count = fscanf(fp, "%s \n", pdictword[wcount].word);
        //printf("%s\n", word[wcount]);
        wcount++;
    }

    for(int i = 0; i < wcount; i++){

        printf("%s\n", pdictword[i].word);
    }

    return 0;
}