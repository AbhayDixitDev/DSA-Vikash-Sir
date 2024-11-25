#include <iostream>
#include <string>
using namespace std;

bool stringFind(string s1,string s2){
return s2.find(s1)!= string::npos;
}

int main(){
	string s1="hello";
	string s2="hello world";
    cout<<stringFind(s1,s2)?"true":"false";	
}