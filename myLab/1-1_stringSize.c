#include<stdio.h>

int stringSize(char *str);

int main(){
    int size;
    char str[20];

    scanf("%s", str);
    size = stringSize(str);

    printf("%d\n", size);

    return 0;
}

int stringSize(char *str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }

    return i;
}