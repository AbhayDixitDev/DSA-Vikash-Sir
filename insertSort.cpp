#include <iostream>
using namespace std;

void insertSort(int arr[],int high){
	for(int i=1;i<high;i++){
		for(int j=i;j>0;j--){
			if(arr[j-1]>arr[j]){
			   int temp=arr[j];
			   arr[j]=arr[j-1];
			   arr[j-1]=temp;	
			}
			else{
				break;
			}
		}
	}
}

int main()
{
	int arr[]={5,4,3,2,1};
	int s= sizeof(arr)/sizeof(arr[0]);
	
	for(int i:arr){
		cout<<i<<" ";
	}
	insertSort(arr,s);
	cout<<"\nafter insertion sort\n";
	
	for(int i:arr){
		cout<<i<<" ";
	}
	
}