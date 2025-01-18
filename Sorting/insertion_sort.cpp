#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
        cout << "unSorted array: ";
 for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 1; i < n; i++) {
        for(int j=i;j>0;j--){
        	if(arr[j-1] > arr[j]){
        		swap(arr[j-1], arr[j]); 
			}
			else{
				break;
			}
		}
        
    }
    cout << "Sorted array  : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}