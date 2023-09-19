#include<stdio.h>

int summation(float start, float stop, float step);

int main(){
    float start, limit, step;
    int i;
    scanf("%f %f %f", &start, &limit, &step);
    i = summation(start, limit, step);
    printf("%d\n", i);
    return 0;
}

int summation(float start, float limit, float step){
    int i, sum = start;
    for(i = 0; sum <= limit; i++){
        start += step;
        sum += start;
    }
    return i;
}