#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>

using namespace std;

int dataGenerator(vector<int> data, int size);

int main(){
    vector<int> data;
    data.resize(10);
    dataGenerator(data, 10);
    for(int i=0; i<10; i++){
        cout << data[i] << " ";
    }
    return 0;
}

int dataGenerator(vector<int> *data, int size){
    srand(time(NULL));
    for(int i = 0; i < size; i++){
        data->push_back(rand()%100);
    }
}