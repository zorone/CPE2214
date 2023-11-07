#include <iostream>

int sumOfFactorial(int num){
    int result = 0;
    if(num > 1){
        result += sumOfFactorial(num-1);
    }
    else{
        result = 1;
    }

    return result;
}

int main(){
    std::cout << sumOfFactorial(5) << std::endl;
    return 0;
}