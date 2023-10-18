#ifndef listStructure_h
#define listStructure_h

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

#endif