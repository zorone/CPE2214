#include <iostream>
#include <vector>

using namespace std;

class queue{
    vector<int> arrayQ;
    int capacity;
    int front;
    int rear;
    int size;

    public:
    queue(int maxSize);
    void enqueue(int data);
    void dequeue(void);
    void showQueue(void);
};

queue::queue(int maxSize){
    capacity = maxSize;
    size = 0;
    front = 0;
    rear = -1;
    arrayQ.resize(maxSize);
}