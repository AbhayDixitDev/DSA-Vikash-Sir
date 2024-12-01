//10. Write a C++ program to check if a given string is a Palindrome or not.
//A palindrome is a word, number, phrase, or other sequence of characters which reads the same backward as forward, such as madam, racecar.
//Example:
//Sample Input: madam
//Sample Output: True



#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string v1){
	string v2=v1;
	int l=v1.size()-1;
	for(int i=0;i<v1.size()/2;i++){
         char temp= v1[i];
         v1[i]=v1[l];
         v1[l]=temp;  
		 l--;   	
	}
	if(v2==v1){
		return true;
	}
	else{
		return false;
	}
}

//void show (string v1){
//		for(auto i:v1){
//		cout<<i;
//	}
//	cout<<"\n";
//}

int main(){
	vector <string> v1;
	string input;
	cout<<"Enter string :";
	getline(cin,input);
	v1.push_back(input);      
    cout<<isPalindrome(v1[0]);    
  
	
}