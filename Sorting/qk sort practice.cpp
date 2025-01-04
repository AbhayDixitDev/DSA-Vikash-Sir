#include <iostream>
using namespace std;


int divide(int arr[],int low,int high)
{
	int pivot = low;
	int i=low+1;
	int j=high;
		do{
			while(arr[i]<=arr[pivot]){
				i++;
			}
			while(arr[j]>arr[pivot]){
				j--;
			}
			if(i<=j){
					swap(arr[i],arr[j]);
			}
		
		}while(i<=j);
		
		swap(arr[j],arr[pivot]);
	
	return j;
	
	
}

void qksort(int arr[],int low,int high){
	if(low<high){
		int pivot = divide(arr,low,high);
		qksort(arr,low,pivot-1);
		qksort(arr,pivot+1,high);
	}
}

int main()
{
	int arr[]= {5,4,3,2,1};
	int s=sizeof(arr)/sizeof(arr[0]);
	qksort(arr,0,s-1);
	
	for(auto i:arr){
		cout<<i<<" ";
	}
}