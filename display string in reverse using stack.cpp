#include <iostream>
#include <string>
#include <stack>
using namespace std;

void reverse(string &s){
	stack<char>stk;
	for(auto i:s){
		stk.push(i);
	}
	for(int i=0;i<s.length();i++){
		cout<<stk.top();
		stk.pop();	
		}
}

int main(){
	
	string s="abhay";
	reverse(s);
	
}