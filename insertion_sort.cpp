#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 3, 1, 6, 4,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < n; i++) {
        int sorted = i;
        while (sorted >= 0 && arr[sorted-1] > arr[sorted]) {
            swap(arr[sorted-1], arr[sorted]); 
            sorted--;
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}