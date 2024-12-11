#include <iostream>
using namespace std;

void merge(int arr[],int low,int mid, int high){
	int arr1[high+1];
	int k=low;
	int i=low;
	int j=mid+1;
	while(i<=mid && j<=high){
		if(arr[i]<arr[j]){
			arr1[k]=arr[i];
			i++;
		}
		else{
			arr1[k]=arr[j];
			j++;
		}
		k++;
	}
	while(i<=mid)
	{
		arr1[k]=arr[i];
			i++;
			k++;
	}
	while(j<=high)
	{
		arr1[k]=arr[j];
			j++;
			k++;
	}
	
	for(int n=low;n<=high;n++){
		arr[n]=arr1[n];
	}
}

void mergeSort(int arr[],int low,int high){
	if(low<high){
		int mid = (low+high)/2;
		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}

int main(){
	int arr[]= {5,4,3,2,1};
	int s=sizeof(arr)/sizeof(arr[0]);
	for(int i:arr){
		cout<<i<<" ";
	}
	mergeSort(arr,0,s-1);
	cout<<"\n after merge sort\n";
	for(int i:arr){
		cout<<i<<" ";
	}
}