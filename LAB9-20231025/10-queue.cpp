#include <iostream>
#include <vector>

using namespace std;

class queue{
    vector<int> arrayQ;
    int capacity;
    int front;
    int rear;

    public:
    queue(int capacity);
    void enqueue(int data);
    void dequeue(void);
    void showQueue(void);
};