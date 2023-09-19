#include<stdio.h>

int counter(float start, float stop, float step);

int main(){
    float start, stop, step;
    int count;
    scanf("%f %f %f", &start, &stop, &step);
    count = counter(start, stop, step);
    printf("%d\n", count);
    return 0;
}

int counter(float start, float stop, float step){
    int i;
    for(i=0; start<stop; i++, start += step){

    }

    return i;
}