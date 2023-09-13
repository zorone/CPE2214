#include<stdio.h>

int main(){
    int arr[10] = {3, 5, 7, 9, 11, 543, 765643, 5341, 5667, -12134};
    int *ptr;

    ptr = &arr[0]; //refer ptr to arr[0]

    for(int i = 0; i<10; i++){  //print all data in arr[] by addr
        printf("num[%d] = %d\n", i, *(ptr+i)); 
    }

    return 0;
}