#include <iostream>
using namespace std;

int srt(int arr[], int low, int high) {
	int pvt=arr[low];
	int p=low+1;
	int q=high;
	
	while(p<=q){
		while(arr[p]<=pvt && p<=q){
		  p++;	
		}
		while(arr[q]>pvt && p<=q){
			q--;
		}
		if(p<=q){
			swap(arr[p],arr[q]);
		}
	}
	swap(arr[low],arr[q]);
	return q;
}

void qs(int arr[],int low,int high){
	if(low<high){
		int pvt;
		pvt=srt(arr,low,high);
//		cout<<pvt<<" ";
		qs(arr,low,pvt-1);
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
	int arr[]={64, 34, 25, 12, 22, 11, 90, 78, 45, 23, 1, 56, 87, 67, 32, 19, 98, 76, 54, 31, 10, 95, 82, 59, 41, 27, 14, 73, 62, 49, 36, 20, 85, 71, 58, 43, 29, 17, 93, 81, 69, 52, 38, 24, 15, 88, 79, 65, 51, 39, 26, 18, 97, 83, 72, 61, 48, 35, 21, 99, 91, 80, 70, 60, 47, 33, 16, 94, 89, 77, 68, 55, 42, 30, 13, 96, 92, 84, 75, 66, 53, 40, 28, 11, 5, 7, 3, 9, 2, 6, 8, 4, 1};
	int size=sizeof(arr)/sizeof(arr[0]);
	prntarr(arr,size);
	qs(arr,0,size-1);
	prntarr(arr,size);
}