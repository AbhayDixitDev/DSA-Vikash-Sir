#include <iostream>
using namespace std;

void select(int arr[],int s){
	for(int i=0;i<s;i++){
		int chotu=i;
		
		for(int j=i+1;j<s;j++){
			if(arr[chotu]>arr[j]){
				chotu=j;
			}
		}
		
		if(chotu!=i){
			int temp=arr[chotu];
			arr[chotu]=arr[i];
			arr[i]=temp;
		}
		
	}
}

int main(){
	int arr[]= {5,4,3,2,1};
	
	int s= sizeof(arr)/sizeof(arr[0]);
	for(auto i:arr){
		cout<<i<<"\t";
	}
	
	select(arr,s);
	cout<<"\nafter selection sort\n";
	for(auto i:arr){
		cout<<i<<"\t";
	}
	
}