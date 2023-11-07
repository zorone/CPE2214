#include <iostream>

using namespace std;

int factorial(int num){   // calculate factorial of num by recursive

    int result = 0;

    if( num == 0 ){

        result = 1;

    }

    else{

        result = num*factorial(num-1);

    }

    

    return result;

}

int summation(int num){  // calculate summation of 1 to num

    int result = 0;

    if(num == 1){

        result = 1;

    }

    else{

        result = num+summation(num-1);

    }

    return result;

}

int Fibonacci(int num){  // show Fibonacci

    int result = 0;

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

    cout<<"factorial = "<<factorial(5)<<endl;

    cout<<"summation = "<<summation(10)<<endl;

    cout<<"Fibonucci = "<<Fibonacci(11)<<endl;

    return 0;

}