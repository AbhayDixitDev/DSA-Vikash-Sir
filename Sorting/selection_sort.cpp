#include <iostream>
using namespace std;

int main(){
	int arr[]={2,3,5,6,8,9,7,8,9};
	
	int s=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<s;i++){
		cout<<arr[i]<<" ";
	}
	for(int i=0;i<s;i++){
		int small=i;
		for(int j=i+1;j<s;j++){
			if(arr[small]>arr[j]){
				small=j;
			}
		}
		if(small!=i){
			int temp=arr[i];
			arr[i]=arr[small];
			arr[small]=temp;			
		}
	}
	cout<<endl;
	for(int i=0;i<s;i++){
		cout<<arr[i]<<" ";
	}
}