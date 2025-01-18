#include <iostream>
using namespace std;

void bubbleSort(int arr[],int s){
	for(int i=0;i<s-1;i++){ 
	     bool swaps=true;  
		for(int j=0;j<s-i;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= temp;
				swaps=false;
			}
		}
		if(swaps){
			break;
		}
	}
}

int main(){
	int arr[]={5,4,3,2,1};  
	int s = sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<s;i++){
		cout<<arr[i]<<" ";
	}
	
	
	bubbleSort(arr,s);
	cout<<"\n after sorting \n";
	
	for(int i=0;i<s;i++){
		cout<<arr[i]<<" ";
	}
}