#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack<int> s;
	
	s.push(24);
	s.push(25);
	s.push(01);
	s.push(85);
	
	if(s.empty()){
		cout<<"\nit is empty\n";
	}
	else{
		cout<<"\nit is not empty \n";
	}
	
	for(;!s.empty();s.pop()){
		cout<<s.top()<<" ";
	
	}
	
	
	if(s.empty()){
		cout<<"\nit is empty";
	}
	else{
		cout<<"\nit is not empty";
	}
}