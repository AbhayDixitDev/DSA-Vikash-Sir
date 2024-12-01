//3.Write a C++ program to capitalize the first letter of each word in a given string.
//Example:
//Sample Input: cybrom pvt ltd
//Sample Output: Cybrom Pvt Ltd


#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	vector<string> v1{"cybrom pvt ltd"};
	for(auto i:v1){
		cout<<i;
	}
	cout<<endl;
	v1[0][0]=static_cast<char>(static_cast<int>(v1[0][0])-32);
	for(int i=0;i<v1[0].size();i++){
		if(v1[0][i]==' '){
			v1[0][i+1]=static_cast<char>(static_cast<int>(v1[0][i+1])-32);
		}
	}
	
	for(auto i:v1){
		cout<<i;
	}
	
	
	
	
	
	
	
}

