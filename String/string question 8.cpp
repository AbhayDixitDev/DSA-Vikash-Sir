//8. Write a C++ program to count all the words in a given string.
//Example:
//Sample Input:DSA
//Sample Output: number of words -> 1

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main (){
	vector<string> s;
	string input;
	cout<<"enter a string:";
	getline(cin,input);
	s.push_back(input);
	int wordCount=1;
	for(int i=0;i<s[0].size();i++){
		if(s[0][i]==' ' && s[0][i+1] !=' ')
		{wordCount++;
		}
	}
	cout<<wordCount;
}
