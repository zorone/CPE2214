#include<stdio.h>

int main(){
    int arr[10] = {3, 5, 7, 9, 11};
    int *ptr;

    ptr = &arr[0];

    for(int i = 0; i<10; i++){
        printf("num[%d] = %d\n", i, arr[i]);
        *ptr = 2*i;
        ptr++;
    }

    printf("rerun\n");

    for(int i = 0; i<10; i++){
        printf("num[%d] = %d\n", i, arr[i]);
    }

    return 0;
}