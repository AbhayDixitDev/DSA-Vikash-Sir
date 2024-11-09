#include <iostream>
using namespace std;


int main(){
	int num;
	cout<<"how many numbers you want to sort";
	cin>>num;
	int arr[num];
	
	for(int i=0;i<num;i++){
		cout<<"enter element"<<i+1<<":";
		cin>>arr[i];
	}
	
	for(int i=0;i<num;i++){
		int swap=0;
		for(int j=0;j<num-i-1;j++){
			if(arr[j]>arr[j+1]){
				arr[j]=arr[j]+arr[j+1];
				arr[j+1]=arr[j]-arr[j+1];
				arr[j]=arr[j]-arr[j+1];
				swap++;
			}
		}
		if(swap==0){
			break;
		}
	}
	for(int i=0;i<num;i++){
		cout<<arr[i]<<endl;
	}
}