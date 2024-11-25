#include <iostream>
using namespace std;


void bubbleSort(int arr[],int n)
{
	for(int i=0;i<n;i++){
		bool swap=false;
		for(int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				swap=true;				
			}
		}
		if(!swap){
		 break;	
		}
	}
}
int main(){
	int arr[]={5,4,3,2,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	bubbleSort(arr,size);
	for(int i:arr){
		cout<<i;
	}
}