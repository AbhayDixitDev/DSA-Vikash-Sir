//6. Write a C++ program to check whether the characters e and g are separated by 
//exactly 2 places anywhere in a given string at least once.
//+ Example:
//Sample Input: eagerer
//Sample Output: eagerer -> 1

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	vector <string> s{"eagerer"};
	bool check =false;
	for(int i=0;i<s[0].size();i++){
		if(s[0][i]=='e' && s[0][i+2]=='g'){
			check=true;
			break;
		}
		if(s[0][i]=='g' && s[0][i+2]=='e'){
			check=true;
			break;
		}
	}
	cout<<check?"true":"false";
}

