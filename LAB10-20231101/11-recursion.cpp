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

    cout << "--- factorial ---    --- summation ---    --- Fibonacci ---" << endl;

    for(int i=1; i<=100; i++){
        if(i < 35){
            factRes = factorial(i);

            factLoop = 1;
            for(int k = 1; k <= i; k++){
                factLoop *= k;
            }

            if(factRes == factLoop){
                cout << "       " << "PASS";
            }
            else{
                cout << "       " << "FAIL";
            }

        }
        else{
                cout << "           ";
        }

        sumRes = summation(i);

        sumLoop = 0;
        for(int k = 1; k <= i; k++){
            sumLoop += k;
        }

        if(sumRes == sumLoop){
            cout << "                 " << "PASS";
        }
        else{
            cout << "                 " << "FAIL";
        }

        if(i < 45){
            FiboRes = Fibonacci(i+1);

            if(i < 3){
                FiboLoop[i%3] = 1;
            }
            else{
                FiboLoop[i%3] = FiboLoop[(i-1)%3] + FiboLoop[(i-2)%3];
            }

            if(FiboRes == FiboLoop[i%3]){
                cout << "                 " << "PASS" << endl;
            }
            else{
                cout << "                 " << "FAIL" << endl;
            }

            cout << FiboRes;
            for(int j = 0; j < 3; i++){
                if(j == i%3){
                    cout << "(" << FiboLoop[i] << ")";
                }
                else{
                    cout << FiboLoop[i];
                }
            }
            cout << endl;

        }
        else{
            cout << "                     " << endl;
        }

    }

    return 0;
}