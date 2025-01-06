#include <iostream>
using namespace std;

void print(int arr[],int high){
	for(int i=0;i<high;i++){
		cout<<arr[i]<<" ";
	}
}
void merge(int arr[],int low, int mid, int high){
	int i=low,j=mid+1,B[high+1];
	int k=low;
	
	while(i<=mid && j<=high){
		if(arr[i]<arr[j]){
			arr[k]=arr[i];
			i++;
			k++;
		}
		else{
				B[k]=arr[j];
			j++;
			k++;
		}
	}
	while(i<=mid){
		B[k]=arr[i];
		i++;
		k++;
		
	}
	while(j<=high){
		B[k]=arr[j];
		j++;
		k++;
		
	}
	for(int i=low;i<high+1;i++){
		arr[i]=B[i];
	}
}

void divide(int arr[],int low, int high){
	int mid ;
	if(low<high){
		mid= (low+high)/2;
		divide(arr, low, mid);
		divide(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
	
}

int main(){
	
	int arr[]={5,4,3,2,1};
	int s=sizeof(arr)/sizeof(arr[0]);
	print(arr,s);
	
	
	divide(arr,0,s-1);
	cout<<"\n";
	print(arr,s);
	
}