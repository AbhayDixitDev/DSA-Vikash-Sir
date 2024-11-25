#include <iostream>

using namespace std;
void selectionSort(int arr[],int n){
	for(int i=0;i<n;i++){
		int index=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				index=j;
			}
		}
		if(index!=i){
			int temp=arr[index];
			arr[index]=arr[i];
			arr[i]=temp;
			
		}
	}
}


int main(){
	int arr[]={5,4,3,2,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	selectionSort(arr,size);
	for(int i:arr){
		cout<<i;
	}
}