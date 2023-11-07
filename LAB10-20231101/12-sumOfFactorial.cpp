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
    if(num > 1){
        result += factorial(num);
        result += sumOfFactorial(num-1);
    }
    else{
        result = factorial(1);
    }

    return result;
}

int main(){
    std::cout << sumOfFactorial(5) << std::endl;
    return 0;
}