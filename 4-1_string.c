#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, const char *argv[]){

    char *str;
    str = (char *)malloc(21);
    strcpy(str, "12345678901234567890");
    printf("str = %s\n", str);

    str = (char *)realloc(str, 50);
    strcpy(str, "12345678901234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    printf("str = %s\n", str);
    return 0;
}