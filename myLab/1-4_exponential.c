#include<stdio.h>

int expo(float value, float limit);

int main(){
    float value, limit;
    int i;
    scanf("%f %f", &value, &limit);
    i = expo(value, limit);
    printf("%d\n", i);

    return 0;
}

int expo(float value, float limit){
    int i;
    float temp = value;
    for(i = 0; temp<=limit; i++){
        temp *= value;
    }

    return i;
}