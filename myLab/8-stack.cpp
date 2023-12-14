#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>

using namespace std;

int dataGenerator(int size);

int main(){
    vector<int> data;
    data.resize(10);
    data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i=0; i<10; i++){
        cout << data[i] << " ";
    }
    return 0;
}

int dataGenerator(int size){
    srand(time(NULL));
    for(int i = 0; i < size; i++){
        
    }
}