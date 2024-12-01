#include <iostream>
using namespace std;

void merge(int arr[],int s, int mid, int e){

     int temp[e+1];
	 int c=s;     
     int i = s;
     int j = mid+1;
     
     while(i<=mid && j<=e){
     	if(arr[i]<arr[j]){
     		temp[c]=arr[i];
     		i++;
		 }
		 else{
		 	temp[c]=arr[j];
		 	j++;
		 }
		 c++;
	 }
	 
	 while(i<=mid){
	 	temp[c]=arr[i];
	 	i++;
	 	c++;
	 }
	 while(j<=e){
	 	temp[c]=arr[j];
	 	j++;
	 	c++;
	 }
	 for(int i=s;i<=e;i++){
	 	arr[i]=temp[i];
	 }

}


void mergeSort(int arr[],int s,int e){
	if(s<e){
		int mid = (s+e)/2;
		mergeSort(arr,s,mid);
		mergeSort(arr,mid+1,e);
		merge(arr,s,mid,e);
	}
}

int main(){
	int arr[]={5,4,3,2,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	mergeSort(arr,0,size-1);
	
	for(int i=0;i<size;i++ ){
		cout<<arr[i]<<" ";
	}
}