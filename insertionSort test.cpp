#include <iostream>
using namespace std;

void insertionSort(int arr[],int n){
	for(int i=1;i<n;i++){
		int data=arr[i];
		int j=i-1;
		
		while(j>=0 && arr[j]>data){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=data;
	}
}



int main(){
	int arr[]={5,4,3,2,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	insertionSort(arr,size);
	for(int i:arr){
		cout<<i;
	}
}