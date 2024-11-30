//Given an array arr[] of n integers, construct a Product 
//Array prod[] (of the same size) such that prod[i] is equal 
//to the product of all the elements of arr[] except arr[i]. 
//Note: Solve it without the division operator in O(n) time.
//Example:
//Input: arr[]  = {10, 3, 5, 6, 2}Output: prod[] = {180, 600, 360, 300, 900}


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int>v1{10,3,5,6,2};
	vector<int>v2;
	for(auto i:v1){
		cout<<i<<" ";
	}
	cout<<"\n";
	
	for(int i=0;i<v1.size();i++){
		int p=1;  //1
		for(int j=0;j<v1.size();j++){
			if(v1[j]==v1[i]){
				//10 == 10;
			}
			else{
				p=p*v1[j]; //p=90*2
			}
		}
		v2.push_back(p);
	}
	
	for(auto i:v2){
		cout<<i<<" ";
	}
	
}