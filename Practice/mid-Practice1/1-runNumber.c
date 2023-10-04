    #include<stdio.h>

    int numCalculate(int n){

        int k = 0;
        for(int i=0; i<n; i++){
            k += n*(n-1);
        }

        return k; // 1 ut
    }

    int main(){
        int n;

        scanf("%d", &n);
        n = numCalculate(n);
        printf("%d\n", n);

        return 0;
    }