#include<stdio.h>

int main(){
    int i;
    char str[20] = "\0";
    scanf("%s", &str);
    strlen(&str);
    printf("%d\n", i);
    return 0;
}

int strlen(char* str){
    for(int i=1; str[i] != '0'; i++){
        return i;
    }
}