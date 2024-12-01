#include <iostream>
#include <vector>
using namespace std;

vector<int> test(vector<int>&v){
	for(int i=0;i<v.size();i++){
		v[i]=v[i]+1;
		cout<<v[i]<<"\t";
	}	
}


int main(){
	vector<int>v{1,2,3,4,5};
	test(v);
	cout<<"\n";
	for(auto k:v){
		cout<<k<<"\t";
	}
}