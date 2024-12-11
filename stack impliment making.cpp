#include <iostream>
using namespace std;

class stk{
	public: int *arr=NULL;  //pointer types free pointer, null poiter, wild pointer, dangling pointer
	int top;
	int n;
	
	stk(int k){
		n = k;
		arr = new int[n];
		top=-1;
	}
	void push(int a){
		if(top==n-1){
			cout<<"overflow\n";
			return;
		}
		top++;
		arr[top] = a ;
	}
	int tops(){
		if(top==-1){
			cout<<"no element \n";
		}
		return arr[top];
		
	}
	void pop(){
		if(top==-1){
			cout<<"there is no value to pop\n";
			return ;
		}
	     top--;
		
	}
	~stk(){
		delete []arr;  // if we dont do so it will create dangling pointer
	}
	
};


int main(){
	int n=5;
	stk sk(n);
	sk.push(5);
	sk.push(10);
	sk.push(15);
	sk.push(20);
//	cout<<sk.tops();
	
	for(int i=0;i<n-1;i++){
		cout<<sk.tops()<<" ";
		sk.pop();
	}
}