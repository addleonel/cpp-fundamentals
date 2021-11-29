#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[], int size_) {
    for (int i=0; i<size_; i++) {
        cout << arr[i] << " ";
    } 
}

void bubbleSort(int arr[], int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main () {
    int numbers[] = {3, 5, 6, 1, 2, 4, 2, 6, 5};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    cout << "Before sorting: "<< "\n";
    printArray(numbers, size);
    // calling bubble sort function
    bubbleSort(numbers, size);
    cout << "\nAfter sorting: "<< "\n";
    printArray(numbers, size);
    return 0; 
}