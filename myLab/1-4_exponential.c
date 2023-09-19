#include<stdio.h>

int expo(float value, float limit);

int main(){
    float value, limit;
    scanf("%f %f", &value, &limit);
    return 0;
}

int expo(float value, float limit){
    int i;
    float temp = value;
    for(i = 0; temp<=limit; i++){
        temp *= value;
    }
}