#include<stdio.h>

int rotate(float arc);

int main(){
    float arc;
    int i;
    scanf("%f", &arc);
    i = rotate(arc);
    printf("%d", i);
    return 0;
}

int rotate(float arc){
    int i;
    float rotation = 0;
    for(i=0; rotation<360; i++){
        rotation = rotation + arc;
    }
    return i;
}