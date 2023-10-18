#include<iostream>
#include<vector>

using namespace std;

class stack{
    private:
        vector<int> arrayStack;
        int topIndex;

    public:
        int capacity;
        stack(int maxSize); // constructor for initial size of stack
        void push(int data);
        void pop(void);
        void showStack(void);
};

stack::stack(int maxSize){
    arrayStack.resize(maxSize);
    topIndex = -1;
    capacity = maxSize;
}

void stack::push(int data){
    topIndex++;
    arrayStack[topIndex] = data;
}

int main(void){
    stack stackObject1(120);
    cout << "capacity = " << stackObject1.capacity << endl;
    // invalid: 
    // cout << "topIndex = " << stackObject1.topIndex << endl;

    return 0;
}