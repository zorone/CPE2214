#include<stdio.h>

int main(){
    int num = 7;
    int numA[5] = {3, 5, 7, 9, 11};
    int *pnum;
    pnum = &numA[0];
    printf("address of num = %p value = %d\n", &num, *(&num));

    for(int i = 0; i<5; i++){
        printf("address of numA[%d] = %p value = %d\n", i, pnum+i, *(pnum+i));
    }
    return 0;
}