#include<stdio.h>

int generateMatrix(int row, int column);

int main(){
    int row, column, n;
    scanf("%d %d", &row, &column);
    n = generateMatrix(row, column);
    printf("%d\n", n);
    return 0;
}

int generateMatrix(int row, int column){
    int n = 0;
    for(int i=0; i<row; i++){

        for(int j=0; j<column; j++){
            n++;

            printf("1 ");
        }
        printf("\n");
    }
    return n;
}