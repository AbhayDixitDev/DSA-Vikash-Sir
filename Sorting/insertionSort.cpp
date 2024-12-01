#include <iostream>
using namespace std;

void insertionSort(int arr[],int n){
	for(int i=1;i<n;i++){
		int prev=i-1;//0
		int curr=arr[i];//4
		while(prev>=0 && arr[prev]>curr){
			arr[prev+1]=arr[prev]; //5,5
			prev--;//-1
			
		}
		arr[prev+1]=curr;//4,5
	}
}



int main(){
	int arr[]={5,4,3,2,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	insertionSort(arr,size);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	
}