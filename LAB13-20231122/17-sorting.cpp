#include <iostream>
#include <vector>

using namespace std;

void swap(vector<int> &data, int i, int j);
void showData(vector<int> &data);
void bubbleSort(vector<int> &data);
void insertionSort(vector<int> &data);

int main(int argc, const char* argv[]){
    vector<int> data{3, 5, 9, 2, 7, 4, 6, 8, 1};
    showData(data);
    insertionSort(data);
    // bubbleSort(data);
    showData(data);

    return 0;
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

void bubbleSort(vector<int> &data){
    int isSwap = 1;
    while(isSwap == 1){
        isSwap = 0;
        for(int i = 1; i < data.size(); i++){
            if(data[i] < data[i-1]){
                swap(data, i, i-1);
                showData(data);
                isSwap = 1;
            }
        }
    }
}

void insertionSort(vector<int> &data){
    for(int i = 1; i < data.size(); i++){
        for(int j = i; (data[j]<data[j-1]) && (j-1 >= 0); j--){
            swap(data, i, i-1);
            showData(data);
        }
    }
}