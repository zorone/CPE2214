#include<stdio.h>

int main(){

    int num = 7;
    printf("address of num = %p value = %d\n", &num, *(&num));

    return 0;
}