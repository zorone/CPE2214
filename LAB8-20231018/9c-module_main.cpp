#include "9b-module_header.h"

int main(void){
    stack stackObject1(20);
    stackObject1.push(20);
    stackObject1.push(15);
    stackObject1.push(10);
    stackObject1.pop();
    stackObject1.showStack();

    // cout << stackObject1.arrayStack[stackObject1.topIndex] << endl;

    return 0;
}