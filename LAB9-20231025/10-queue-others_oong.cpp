#include <iostream>
#include <vector>

using namespace std;
class queue {
    vector<int> arrayQ;
    int front;
    int rear;
    int size;
    int capacity;
public:
    queue(int maxSize);
    void enqueue(int data);
    void dequeue(void);
    void showQueue(void);
};
queue::queue(int maxSize) {
    capacity = maxSize;
    size = 0;
    front = 0;
    rear = -1;
    arrayQ.resize(maxSize);
}
void queue::enqueue(int data) {
    if (size < capacity) {
        rear = (rear+1)%capacity;
        arrayQ[rear] = data;
        size++;
    }
        else {
        cout<<"Queue is full, cannot enqueue."<<endl;
    }
}
void queue::dequeue() {
    if (size > 0) {
        arrayQ[front] = 0; //ทำให้ array ที่ถูก dequeue เป็น 0 ก่อนที่จะทำการ mod
        front = (front+1)%capacity;
        size--;
    }
    else {
        cout<<"Queue is emtry, cannot dequeue."<<endl;
    }
}
void queue::showQueue(void) {
    cout<<"Size = "<<size<<endl;
    cout<<"Front = "<<front<<endl;
    cout<<"Rear = "<<rear<<endl;
    cout<<"Capacity = "<<capacity<<endl;
    for (int i=0; i<capacity; i++) {
        cout<<"Queue "<<i<<" = "<<arrayQ[i]<<endl;
    }
}
int main(int argc, const char * argv[]) {
    queue Q1(5);
    Q1.enqueue(2);
    Q1.enqueue(4);
    Q1.enqueue(6);
    Q1.enqueue(8);
    Q1.enqueue(10);
    Q1.enqueue(12);
    Q1.enqueue(14);
    Q1.dequeue();
    Q1.dequeue();
    Q1.dequeue();
    Q1.dequeue();
    Q1.dequeue();
    Q1.dequeue();
    Q1.dequeue();
    Q1.dequeue();
    Q1.showQueue();
    return  0;
}