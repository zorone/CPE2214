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
        queue(int size);
        int enqueue(int data);
};

queue::queue(int size){
    capacity = size;
    size = 0;
    front = 0;
    rear = -1;
    arrayQ.resize(size);
}

int queue::enqueue(int data){
    if(size < capacity){
        rear = (size+1)%capacity;
        arrayQ[rear] = data;
        size++;
    }
    else{
        cout << "Queue is full" << endl;
    }
    return 0;
}

int main(){
    queue Q(10);
    Q.enqueue(7);
    return 0;
}