//9. Write a C++ program to check whether two characters appear equally in a given string.
//Example:
//Sample Input: aabcdeef
//Sample Output: True


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
	

	char c;
	int n=0;
	for(int i=0;i<s[0].size();i++){
		
		if(s[0][i]==s[0][i+1]){
			if(c!=s[0][i]){
			c=s[0][i];
			n++;
			}
		
		}
		if(n>=2){
			cout<<"True";
			break;
		}
	}
	if(n<2){
		cout<<"False";
	}
	
	
}
