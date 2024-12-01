#include <iostream>
using namespace std;

void selectionSort(int arr[],int n){
   for(int i=0;i<n;i++){
   	 for(int j=i+1;j<n;j++){
   	 	  if(arr[i]>arr[j]){
   	 	  	   swap(arr[i],arr[j]);
			  }
		}
   }	
}

int main(){
	int arr[]={5,4,3,2,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	selectionSort(arr,size);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	
}