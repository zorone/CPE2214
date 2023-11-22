#include <iostream>
#include <vector>

using namespace std;

void swap(vector<int> &data, int i, int j);
void showData(vector<int> &data);
swapping();

int main(int argc, const char* argv[]){
    vector<int> data{3, 5, 9, 2, 7, 4, 6, 8, 1};
    showData(data);
}

void swap(vector<int> &data, int i, int j){
    int temp;
    temp = data[i];
    data[i] = data[j];
    data[j] = temp;
}

void showData(vector<int> &data){
    for(int i = 0; i<data.size(); i++){
        cout << data[i] << " ";
    }
    cout << endl;
}
