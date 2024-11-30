#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>

int unique(vector <int> &v){
	sort(v.begin(),v.end());

	int n=v.size()-1;//6
	int k=0;
	for(int i=1;i<v.size();i++){
		if(v[i-1]==v[i]){
			v[k]=v[i];
			k++; //0 1 2 
		}
		else{
			n--; //5 4 3
		}
	}
	
	for(int i=v.size();i>n;i--){
		v.pop_back();
	}
}

int main(){
	vector<int>v;
	int n;
	cout<<"Enter size of array:";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		int temp;
		cout<<"\nenter "<<i<<" element of vector:";
		cin>>temp;
		v.push_back(temp);
	}
	
	cout<<"Before remove element\n";
	for(auto i:v){
		cout<<i<<"\t";
	}
	cout<<"\n";
	
	unique(v);
	for(auto i:v){
		cout<<i<<"\t";
	}
	cout<<"\n";
}