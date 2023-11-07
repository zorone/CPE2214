#include <iostream>

int factorial(int num){
    if(num > 1){
        return factorial(num-1)*num;
    }
    else{
        return 1;
    }
}

int sumOfFactorial(int num){
    int result = 0;
    if(num > 0){
        result += sumOfFactorial(num-1);
    }
}

int main(){
    std::cout << sumOfFactorial(5) << std::endl;
    return 0;
}