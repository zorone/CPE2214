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
    long long FiboLoop[3] = {0, 0, 0};

    char str[20] = "\0";

    cout << "  --- factorial ---    --- summation ---    --- Fibonacci ---" << endl;

    for(int i=1; i<=100; i++){

        cout << i << ":";

        if(i < 35){

            factLoop = 1;
            for(int k = 1; k <= i; k++){
                factLoop *= k;
            }

            sprintf(str, "%11lld: ", factLoop);

            factRes = factorial(i);

            if(factRes == factLoop){
                cout << str << "PASS";
            }
            else{
                cout << str << "FAIL";
            }

        }
        else{
                cout << "                 ";
        }

        sumLoop = 0;
        for(int k = 1; k <= i; k++){
            sumLoop += k;
        }

        sprintf(str, "%11lld: ", sumLoop);

        sumRes = summation(i);

        if(sumRes == sumLoop){
            cout << "    " << str << "PASS";
        }
        else{
            cout << "    " << str << "FAIL";
        }

        if(i < 45){

            if(i < 3){
                FiboLoop[i%3] = 1;
            }
            else{
                FiboLoop[i%3] = FiboLoop[(i-1)%3] + FiboLoop[(i-2)%3];
            }

            sprintf(str, "%11lld: ", FiboLoop);

            FiboRes = Fibonacci(i);

            if(FiboRes == FiboLoop[i%3]){
                cout << "    " << str << "PASS" << endl;
            }
            else{
                cout << "    " << str << "FAIL" << endl;
            }
        }
        else{
            cout << "                     " << endl;
        }

    }

    return 0;
}