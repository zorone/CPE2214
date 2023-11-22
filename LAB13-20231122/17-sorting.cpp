#include <iostream>
#include <vector>

using namespace std;

void swap(vector<int> &data, int i, int j);
void showData(vector<int> &data);
void bubbleSort(vector<int> &data);
void insertionSort(vector<int> &data);
int pickPivot(vector<int> &data, int left, int right);
void quickSort(vector<int> &intArr, int left, int right);

int main(int argc, const char* argv[]){
    vector<int> data{3, 5, 9, 2, 7, 4, 6, 8, 1};
    showData(data);
    cout << "pivot = " << pickPivot(data, 0, 8) << endl;
    // insertionSort(data);
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
            swap(data, j, j-1);
            showData(data);
        }
    }
}

int pickPivot(vector<int> &data, int left, int right){
    int center = (left + right) / 2;
    if(data[center] < data[left]){
        swap(data, center, left);
    }
    if(data[right] < data[center]){
        swap(data, right, center);
    }
    if(data[center] < data[left]){
        swap(data, center, left);
    }

    return center;
}

void quickSort(vector<int> &intArr, int left, int right){
    int pivotIndex = 0, i = 0, j = 0;
    int pivot = 0;
    if((right - left + 1) > 3){
        pivotIndex = pickPivot(intArr, left, right);
        pivotIndex = (left+right)/2;
        cout << "pivot = " << pivot << " " << left << " " << right << endl;
        swapA(intArr, pivotIndex, right);
        showArray(intArr);
        i = left;
        j = right-1;
        while(i <= j){
            if((intArr[j]<pivot) && intArr[i]>pivot){
                swapA(intArr, i, j);
            }
            else if(intArr[j]>pivot){
                j--;
            }
            else if(intArr[i]<= pivot){
                i++;
            }
        }
    }
}