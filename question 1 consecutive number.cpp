#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

bool consecutive(vector<int>&A){
	sort(A.begin(),A.end());
	bool check = true;
	int margin=A[1]-A[0];
	for(int i=0;i<A.size()-1;i++){
		if((A[i+1]-A[i])!=margin){
			check=false;
			break;
		}
	}
	return check;
}


int main(){
	vector<int>A{0,1,5,2,3};
	
	if(consecutive(A)){
	cout<<"consecutive";	
	}
	else{
		cout<<"not consecutive";
	}
}