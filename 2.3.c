#include<stdio.h>
#include<stdlib.h>

int main(){
    int *pnum;
    pnum = (int *) malloc(100000*sizeof(int));

    for(int i = 0; i<100000; i++){
        *(pnum+i) = 2*i;
    }

    for(int i = 0; i<100000; i++){
        printf("address of pnum[%d] = %p value = %d", i, pnum+i, *(pnum+i));
    }

    free(pnum);
    
    return 0;
}