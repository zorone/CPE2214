#include <iostream>

int sumOfFactorial(int num){
    int result = 0;
    int factorial = 1;
    for(int i=1; i<=num; i++){
        factorial *= i;
        result += factorial;
    }

    return result;
}

int main(){
    std::cout << sumOfFactorial(5) << std::endl;
    return 0;
}