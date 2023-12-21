#include <iostream>

using namespace std;
void showArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void showStep(int numbers[], int start, int end) {
    cout << "Step : ";
    for (int i = start; i <= end; i++)
        cout << numbers[i] << " ";
    cout << endl;
}

void merge(int numbers[], int temp[], int left, int mid, int right) {
    int i, left_end, num_elements, tmp_pos;
    left_end = mid - 1;
    tmp_pos = left;
    num_elements = right - left + 1;
    showStep(numbers, tmp_pos - num_elements, tmp_pos - 1);

    while ((left <= left_end) && (mid <= right)) {
        if (numbers[left] <= numbers[mid]) {
            temp[tmp_pos] = numbers[left];
            tmp_pos = tmp_pos + 1;
            left = left + 1;
        } else {
            temp[tmp_pos] = numbers[mid];
            tmp_pos = tmp_pos + 1;
            mid = mid + 1;
        }
    }
    while (left <= left_end) {
        temp[tmp_pos] = numbers[left];
        left = left + 1;
        tmp_pos = tmp_pos + 1;
    }
    while (mid <= right) {
        temp[tmp_pos] = numbers[mid];
        mid = mid + 1;
        tmp_pos = tmp_pos + 1;
    }
    for (i = 0; i < num_elements; i++) {
        numbers[right] = temp[right];
        right = right - 1;
    }
}

void mergeSort(int numbers[], int temp[], int left, int right) {
    int mid;
    if (right > left) {
        mid = (right + left) / 2;
        mergeSort(numbers, temp, left, mid);
        mergeSort(numbers, temp, mid + 1, right);
        merge(numbers, temp, left, mid + 1, right);
    }
}

int main() {
    int numbers[] = {4,11,13,7,6,10,3,16,2,9,1,12,14,8,5,15};
    int num_elements = sizeof(numbers) / sizeof(numbers[0]);
    int temp[num_elements];
    
    cout << "Original array : ";
    showArray(numbers, num_elements);
    mergeSort(numbers, temp, 0, num_elements - 1);

    cout << "Sorted array : ";
    showArray(numbers, num_elements);

    return 0;
}