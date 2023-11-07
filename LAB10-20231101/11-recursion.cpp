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

    long long factRes = 0;
    long long sumRes = 0;
    long long FiboRes = 0;
    
    long long factLoop = 0;
    long long sumLoop = 0;
    long long FiboLoop = 0;

    for (int i=1; i<=35; i++){

        cout<<"Round "<< i << endl;

        factRes = factorial(i);
        cout<<"    factorial = "<< factRes <<endl;

        factLoop = 1;
        for(int k = 1; k <= i; k++){
            factLoop *= k;
        }
        cout<<"    factorial = "<< factLoop <<endl;

        if(factRes == factLoop){
            cout << "   " << i << ": PASS" << endl;
        }
        else{
            cout << "   " << i << ": FAIL" << endl;
        }

        sumRes = summation(i);
        cout<<"    summation = "<< sumRes <<endl;

        sumLoop = 0;
        for(int k = 1; k <= i; k++){

        }

        cout<<"    Fibonucci = "<<Fibonacci(i)<<endl;
        cout<<endl;
    }

    return 0;
}