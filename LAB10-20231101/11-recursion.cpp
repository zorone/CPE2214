#include <iostream>

using namespace std;

long long factorial(int num){   // calculate factorial of num by recursive
    long long result = 0;

    if( num == 0 ){
        result = 1;
    }
    else{
        result = num*factorial(num-1);
    }

    return result;
}

long long summation(int num){  // calculate summation of 1 to num
    long long result = 0;

    if(num == 1){
        result = 1;
    }
    else{
        result = num+summation(num-1);
    }

    return result;
}

long long Fibonacci(int num){  // show Fibonacci

    long long result = 0;

    // 1,1,2,3,5,8,13,21,34,55,89
    if(num == 1){
        result = 1;
    }
    else if(num == 2){
        result = 1;
    }
    else if (num>2){
        result = Fibonacci(num-1)+Fibonacci(num-2);
    }

    return result;
}

int main(int argc, const char * argv[]) {
    
    for (int i=1; i<=100; i++){

        cout<<"factorial = "<<factorial(i)<<endl;
        cout<<"summation = "<<summation(i)<<endl;
        cout<<"Fibonucci = "<<Fibonacci(i)<<endl;
    }

    return 0;
}