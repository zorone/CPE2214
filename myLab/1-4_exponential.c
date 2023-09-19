#include<stdio.h>

int expo(float value, float limit);

int main(){
    float value, limit;
    scanf("%f %f", &value, &limit);
    return 0;
}

int expo(float value, float limit){
    int i;
    for(i = 0; value<=limit; i++){
        value *= value;
    }
}