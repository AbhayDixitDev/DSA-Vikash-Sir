//Given an array arr[] of size N. The task is to find the sum of the contiguous 
//subarray within a arr[] with the largest sum. 
//Example:
//Input: arr = {-2,-3,4,-1,-2,1,5,-3}
//Output: 7
//Explanation: The subarray {4,-1, -2, 1, 5} has the largest sum 7.
//Input: arr = {2}
//Output: 2
//Explanation: The subarray {2} has the largest sum 2.
//Input: arr = {5,4,1,7,8}
//Output: 25
//Explanation: The subarray {5,4,1,7,8} has the largest sum 25.

#include <iostream>
#include <vector>
using namespace std;

int max(int a,int b){
		if(a>b){return a;}
		else{return b;}
}

int LargestSum(vector<int>v1){
	
	int maxSoFar = 0;
	int maxEndingHere = 0;
	
	for(int i=0;i<v1.size();i++){
	    maxEndingHere = max(v1[i], maxEndingHere + v1[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);

	}
	return maxSoFar;
	
}

int main(){
	vector<int> v1;
	int n;
	cout<<"Enter size of array:";
	cin>>n;
	for(int i=0;i<n;i++){
		int e;
		cout<<"Enter element in index "<<i<<":";
		cin>>e;
		v1.push_back(e);
	}
	
	for(auto i:v1){
		cout<<i<<" ";
	}
	
	cout<<"\nLargest Sum in Array:"<<LargestSum(v1);
	
}