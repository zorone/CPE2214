#include "9b-module_header.h"

stack::stack(int maxSize){
    arrayStack.resize(maxSize);
    topIndex = -1;
    capacity = maxSize;
}

void stack::push(int data){
    topIndex++;
    arrayStack[topIndex] = data;
}

void stack::pop(){
    arrayStack[topIndex] = 0;
    topIndex--;
}

void stack::showStack(){
    cout << "top Index = " << topIndex << endl;
    cout << "capacity = " << capacity << endl;
    // cout << "size of stack = " << arrayStack.size() << endl;
    cout << "size of stack = " << topIndex + 1 << endl;

    for(int i = 0; i < arrayStack.size(); i++){
        cout << "stack index " << i << " = " << arrayStack[i] << endl;
    }

}