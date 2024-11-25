#include <iostream>
using namespace std;


void merge(int arr[],int low,int mid,int high){
	int temp[high+1];
	int indextemp=low;
	
	int i=low;
	int j=mid+1;
	
	while(i<=mid && j<=high){
		if(arr[i]<arr[j]){
		    temp[indextemp]=arr[i];
		    i++;
		    
		}
		else{
			temp[indextemp]=arr[j];
		    j++;
		}
		indextemp++;
	}
	
	while(i<=mid){
		temp[indextemp]=arr[i];
		i++;
		indextemp++;
	}
	while(j<=high){
		temp[indextemp]=arr[j];
		j++;
		indextemp++;
	}
	
	 for(int i=low;i<=high;i++){
	 	arr[i]=temp[i];
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
	int arr[]={5,4,3,2,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	mergeSort(arr,0,size-1);
	for(int i:arr){
		cout<<i;
	}
}