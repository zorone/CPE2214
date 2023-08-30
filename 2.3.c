#include<stdio.h>
#include<stdlib.h>

int main(){
    int *pnum;
    pnum = (int *) malloc(1000000*sizeof(int));

    for(int i = 0; i<1000000; i++){
        *(pnum+i) = 2*i;
    }

    for(int i = 0; i<1000000; i++){
        printf("address of pnum[%d] = %p value = %d\n", i, pnum+i, *(pnum+i));
    }

    free(pnum);
    
    return 0;
}