#include <iostream>
#include <vector>

using namespace std;

struct vectorTemp{
    vector<int> data;
    int pivot = -1;
} typedef temp;

void swap(vector<int> &data, int i, int j);
void showData(vector<int> &data);
void bubbleSort(vector<int> &data);
void insertionSort(vector<int> &data);
int pickPivot(vector<int> &data, int left, int right);
void showRange(vector<int> &data, int start, int end);
void showRangeWithPivot(vector<int> &data, int start, int end, int pivot, temp &dest);
void showTempRange(vector<int> &data, int start, int end, temp &tempData);
void quickSort(vector<int> &data, int left, int right, temp &tempData);
void insertionSortR(vector<int> &data, int left, int right, temp &tempData);

int main(int argc, const char* argv[]){
    vector<int> data{2, 4, 8, 3, 1, 5, 9, 13, 11, 6, 22, 24, 28, 23, 21, 25, 35, 39, 43, 41, 26};
    temp tempData;
    showData(data);
    quickSort(data, 0, (int)data.size()-1, tempData);
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

    return data[center];
}

void showRange(vector<int> &data, int start, int end){
    for(int i = start ; i <= end; i++){
        cout << data[i] << " ";
    }
}

void showRangeWithPivot(vector<int> &data, int start, int end, int pivot, temp &dest){
    dest.pivot = pivot;
    dest.data.clear();
    for(int i = start; i <= end; i++){
        dest.data.push_back(data[i]);
        // showData(dest.data);
        if(data[i] == pivot){
            cout << "_" << data[i] << "_ ";
        }
        else{
            cout << data[i] << " ";
        }
    }
}

void showTempRange(vector<int> &data, int start, int end, temp &tempData){
    int sz = tempData.data.size()-1;
    int set = 0;
    for(int i = 0; i < data.size(); i++){
        if(i == start){
            cout << "[";
            set++;
        }

        if(data[i] == tempData.data[0]){
            cout << "[";
            set++;
        }

        if(set){
            cout << " ";
            set = 0;
        }
        
        if(data[i] == tempData.pivot){
            cout << "_" << data[i] << "_ ";
        }
        else{
            cout << data[i] << " ";
        }

        if(i == end){
            cout << "]";
            set++;
        }
        if(data[i] == tempData.data[sz]){
            cout << "]";
            set++;
        }

        if(set){
            cout << " ";
            set = 0;
        }
    }
    cout << endl;
}

void quickSort(vector<int> &data, int left, int right, temp &tempData){
    int pivotIndex = 0, i = 0, j = 0;
    int pivot = 0;
    if((right - left + 1) > 3){
        pivotIndex = (left+right)/2;
        pivot = pickPivot(data, left, right);
        swap(data, pivotIndex, right);

        i = left;
        j = right-1;
        while(i <= j){
            if((data[j]<pivot) && data[i]>pivot){
                swap(data, i, j);
            }
            else if(data[j] > pivot){
                j--;
            }
            else if(data[i] <= pivot){
                i++;
            }
        }
        swap(data, right, i);

        cout << "pivot = " << pivot << endl;

        showRange(data, 0, left-1);
        cout << "[ ";
        showRangeWithPivot(data, left, right, pivot, tempData);
        cout << "] ";
        showRange(data, right+1, data.size()-1);
        cout << endl;

        quickSort(data, left, i-1, tempData);
        quickSort(data, i+1, right, tempData);
    }
    else if(left == right){
        cout << "Group with 1 member." << endl;
        showTempRange(data, left, right, tempData);
    }
    else{
        cout << "Insertion Sort" << endl;
        insertionSortR(data, left, right, tempData);
    }
}

void insertionSortR(vector<int> &data, int left, int right, temp &tempData){
    int k = 0;
    int sz = data.size();
    int tempSz = tempData.data.size();
    for(int i = left+1; i <= right; i++){
        for(int j = i; (data[j+1]<data[j]) && (j < sz); j--){
            swap(data, j+1, j);
            for( ; k < tempSz; k++){
                if(tempData.data[k] == data[j]){
                    swap(tempData.data, k+1, k);
                    break;
                }
            }
        }
        showTempRange(data, left, right, tempData);
    }
}