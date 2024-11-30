#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Input: arr[] = {0, -1, 2, -3, 1}, x= -2
//Output: Yes
//Explanation: If we calculate the sum of the output,1 + (-3) = -2
bool fun(vector<int>v1,int x){
		for(int i=0;i<v1.size()-1;i++){
		if((v1[i]+v1[i+1])==x){
			return true;
		}
	}
	return false;
}


int main(){
	int n;
	vector<int>v1;
	int x;
	
	cout<<"Enter size of array:";
	cin>>n;
	
	for(int i=0;i<n;i++){
		int temp;
		cout<<"\nenter "<< i+1<<" element of array:";
		cin>>temp;
		v1.push_back(temp);
	}
	
	
	cout<<"enter X for finding there is pair or not:";
	cin>>x;
	

	fun(v1,x)?cout<<"yes":cout<<"no";
	
}