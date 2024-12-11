#include <iostream>
using namespace std;

int divide(int arr[],int low,int high){
	int pivot=low;
	int i=low+1;
	int j=high;
	while(i<=j){
		while(arr[i]<=arr[pivot]){
			i++;
		}
		while(arr[j]>arr[pivot]){
			j--;
		}
		if(i<=j){
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	int temp= arr[j];
	arr[j]=arr[pivot];
	arr[pivot]=temp;
	
	return j;
}

void quickSort(int arr[],int low, int high){
	if(low<high){
		int pivot = divide(arr,low,high);
		quickSort(arr,low,pivot-1);
		quickSort(arr,pivot+1,high);
	}
}

int main(){
	int arr[]={5,4,3,2,1};
	int s=sizeof(arr)/sizeof(arr[0]);
	for(int i:arr){
		cout<<i<<" ";
	}
	
	quickSort(arr,0,s-1);
	cout<<"\nafter quick sort\n";
	for(int i:arr){
		cout<<i<<" ";
	}
}