#include<stdio.h>

int summation(float start, float stop, float step);

int main(){
    float start, stop, step;
    int i;
    scanf("%f %f %f", &start, &stop, &step);
    i = summation(start, stop, step);
    printf("%d\n", i);
    return 0;
}

int summation(float start, float stop, float step){

}