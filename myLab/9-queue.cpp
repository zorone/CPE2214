#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>

using namespace std;

class queue{
    private:
        vector<int> arrayQ;
        int front;
        int rear;
        int size;
        int capacity;
    
    public:
        queue(int maxSize);
        int enqueue(int data);
        int showQueue();
};

queue::queue(int maxSize){
    capacity = maxSize;
    size = 0;
    front = 0;
    rear = -1;
    arrayQ.resize(maxSize);
}

int queue::enqueue(int data){
    if(size < capacity){
        rear = (rear+1)%capacity;
        arrayQ[rear] = data;
        size++;
    }
    else{
        cout << "Queue is full" << endl;
    }
    return 0;
}

int queue::showQueue(){
    int index = front;
    for(int i = 0; i < size; i++){
        cout << arrayQ[index] << " ";
        index = (index+1)%capacity;
    }
    cout << endl;
    return 0;
}

int main(){
    queue Q(10);
    Q.enqueue(7);
    Q.showQueue();
    return 0;
}