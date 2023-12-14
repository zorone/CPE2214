#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> data;
    data.resize(10);
    data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i=0; i<10; i++){
        cout << data[i] << " ";
    }
    return 0;
}