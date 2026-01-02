#include<iostream>
using namespace std;

void recursiveInsertionSort(int arr[], int n) {
    if (n <= 1) return; // Base case: array of size 1 is already sorted

    // Sort the first n-1 elements
    recursiveInsertionSort(arr, n - 1);

    // Insert the last element at its correct position
    int last = arr[n - 1];
    int j = n - 2;

    // Move elements of arr[0..n-2], that are greater than last,
    // to one position ahead of their current position
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    recursiveInsertionSort(arr, n);

    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}