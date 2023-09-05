#include<stdio.h>
#include<stdlib.h>

int main(){
    int *pnum;
    pnum = (int *) malloc(1000000*sizeof(int)); //create arr size 1'000'000 for storing integer.

    for(int i = 0; i<1000000; i++){
        *(pnum+i) = 2*i;  //assign value 2*i for each slot.
    }

    for(int i = 0; i<1000000; i++){
        printf("address of pnum[%d] = %p value = %d\n", i, pnum+i, *(pnum+i));  //print all value inside pnum.
    }

    free(pnum);  //deallocate pnum from memory.
    
    return 0;
}