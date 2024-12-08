#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class maxInArrUsingStack{
	stack<int>stk;
	public:
	void push(int n){
	      
	    if(stk.empty() || n>=stk.top()){
	    	stk.push(n);
		}
	
     }
     int getMax(){
     	return stk.top();
	 }
};


int maxInarr(vector<int> &arr){
	maxInArrUsingStack stk;
	for(auto i:arr){
		stk.push(i);
	}
	
	return stk.getMax();
}

int main(){
	
	vector <int> arr{2,5,8,1,23,5,2};
	cout<<maxInarr(arr);
	
	
}