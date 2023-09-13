#include<stdio.h>

int min(int *data, int numData){ //for loop

}

void sorting(int *data, int numData){
    int temp = 0;
    for(int i = 0; i < numData; i++){
        for(int j = i+1; j < numData; j++){
            if(data[j]<data[i]){
                temp = data[j];
                data[j] = data[i];
                data[i] = temp;
            }
        }
    }
}

void printAll(int *data, int numData){
    for(int i = 0; i < numData; i++){
        printf("%d, ", data[i]);
    }
}

int main(void){
    int data[10] = {8, 5, 9, 10, 7, 12, 15, 4, 3, 6};
    // printf("min data = %d\n", min(data, 10));
    sorting(data, 10);
    printAll(data, 10);
    return 0;
}
