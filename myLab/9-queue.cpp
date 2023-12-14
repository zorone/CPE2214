#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>

using namespace std;

class queue{
    private:
        vector<int> data;
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
    data.resize(size);
}

int queue::enqueue(int data){
    if(size < capacity){
        rear = (size+1)%capacity;
        data[rear] = data;
    }
    return 0;
}

int main(){
    return 0;
}