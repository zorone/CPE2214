#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>

using namespace std;

int dataGenerator(vector<int> data, int size);

int main(){
    vector<int> data{7, 5, 4, 3, 2, 6};
    data.resize(10);
    dataGenerator(data, 10);
    for(int i=0; i<10; i++){
        cout << data[i] << " ";
    }
    return 0;
}