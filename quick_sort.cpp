#include <iostream>
using namespace std;

int srt(int arr[], int low, int high) {
    int pvt = arr[low]; // pivot element
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= j && arr[i] <= pvt) {
            i++;
        }
        while (i <= j && arr[j] > pvt) {
            j--;
        }
        if (i <= j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(int arr[],int low,int high){
	if(low<high){
		int pvt;
		pvt=srt(arr,low,high);
//		cout<<pvt;
		qs(arr,0,pvt-1);
		qs(arr,pvt+1,high);
	}
}



void prntarr(int arr[],int s){
	for(int i=0;i<s;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[]={35,50,15,25,80,20,90,45};
	prntarr(arr,8);
	qs(arr,0,7);
	prntarr(arr,8);
}