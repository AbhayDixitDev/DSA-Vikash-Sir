//5. Write a C++ program to sort characters (numbers and punctuation symbols are not included) in a string.
//Example:
//Sample Input: python
//Sample Output: hnopty

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	vector <string> s;
	string input;
	cout<<"Enter string :";
	getline(cin,input);
	s.push_back(input);
	
	sort(s[0].begin(),s[0].end());
	cout<<s[0];
//	vector<int> n;
//	for(int i=0;i<s[0].size();i++){
//		int t=static_cast<int>(s[0][i]);
//		n.push_back(t);
//	}
//	sort(n.begin(),n.end());
//	
//	for(int i=0;i<s[0].size();i++){
//		s[0][i]=n[i];
//	}
//	for(auto i:s){
//		cout<<i;
//	}
	
}
