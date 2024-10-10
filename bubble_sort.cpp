// Q.6 W.A.P.  to display array in ascending orders?

#include <iostream>
using namespace std;

int main(){
    int arr[]={2,3,5,6,8,9,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
         for (int i = 0; i < n - 1; i++) {
         	int swap1=0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j],arr[j + 1]);
                swap1++;
        }
        if(swap1==0){
        	break;
		}
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

