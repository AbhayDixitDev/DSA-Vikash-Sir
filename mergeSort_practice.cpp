#include <iostream>
using namespace std;

void merge(int *arr,int s,int mid,int e){
	int len1=mid-s+1;
	int len2=e-mid;
	
	int *temp=new int[len1+len2];
	
	int index1=0,index2=0,tempIndex=0;
	
	while(index1<len1 && index2<len2){
		if(arr[s+index1]<arr[mid+1+index2]){
			temp[tempIndex++]=arr[s+index1++];
		}
		else{
			temp[tempIndex++]=arr[mid+1+index2++];
		}
	}
	
	while(index1<len1){
		temp[tempIndex++]=arr[s+index1++];
	}
	
	while(index2<len2){
		temp[tempIndex++]=arr[mid+1+index1++];
	}
	
	
	for(int i=0;i<(len1+len2);i++){
		arr[s+i]=temp[i];
	}
	
	delete[] temp;
	
}



void mergeSort(int *arr,int s,int e){
	if(s<e){
		int mid=(s+e)/2;
		mergeSort(arr,s,mid);
		mergeSort(arr,mid+1,e);
		merge(arr,s,mid,e);
	}
}

int main(){
	int arr[]={5,4,3,2,1};
	
	int size=sizeof(arr)/sizeof(arr[0]);
	
	mergeSort(arr,0,size-1);
	
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
		
	} cout<<endl;
}