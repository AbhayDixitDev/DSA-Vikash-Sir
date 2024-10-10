#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 3, 1, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < n; i++) {
        int sorted = arr[i]; // store the current element in a separate variable
        int j = i - 1; // initialize the index for the inner loop

        while (j >= 0 && arr[j] > sorted) {
            swap(arr[j], arr[j + 1]); // swap the elements
            j--;
        }

        arr[j + 1] = sorted; // insert the sorted in its correct position
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}