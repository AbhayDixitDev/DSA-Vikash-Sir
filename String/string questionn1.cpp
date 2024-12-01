//1.	 Write a C++ program to reverse a given string.
//Example:
//Sample Input: Cybrom
//Sample Output: morbyC


#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<string> &v1){
	int l=v1.size()-1;
	for(int i=0;i<v1.size()/2;i++){
         string temp= v1[i];
         v1[i]=v1[l];
         v1[l]=temp;  
		 l--;   	
	}
}

void show (vector <string> v1){
		for(auto i:v1){
		cout<<i;
	}
	cout<<"\n";
}

int main(){
	vector <string> v1;
	int n;
	cout<<"enter size of string:";
	cin>>n;
	cout<<"enter string:";
	for(int i=0;i<n;i++){
		char c;		
		cin>>c;
		v1.push_back(&c);
	}
	cout<<"before \t";
      show(v1);
      
    reverse(v1);
	
	cout<<"After \t";
      show(v1);
	
	
}