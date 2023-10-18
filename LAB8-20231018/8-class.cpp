#include<iostream>
#include<vector>

using namespace std;

class stack{
    private:
        vector<int> arrayStack;
        int topIndex;
        int capacity;

    public:
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

void stack::showStack(){
    cout << "top Index = " << topIndex << endl;
    cout << "capacity = " << capacity << endl;
    // cout << "size of stack = " << arrayStack.size() << endl;
    cout << "size of stack = " << topIndex + 1 << endl;

    for(int i = 0; i < arrayStack.size(); i++){

    }

}

int main(void){
    stack stackObject1(20);
    stackObject1.showStack();

    return 0;
}