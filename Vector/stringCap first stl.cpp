#include <iostream>
#include <string>

using namespace std;

void StringCap(string s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.size();i++){
		if(s[i]==' '){
		s[i+1]=	toupper(s[i+1]);
		}
	}
	cout<<s<<"\n";
}

int main(){
	string s="how much quantity did you";
	StringCap(s);
}