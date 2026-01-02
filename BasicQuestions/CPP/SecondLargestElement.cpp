#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int firstLargest = arr[0], secondLargest = INT_MIN;
    for (int i = 1; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "The second largest element in the array is: " << secondLargest << endl;
    }

    return 0;
}