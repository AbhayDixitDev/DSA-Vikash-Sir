//7. Write a C++ program to count all the vowels in a given string.
//Example:
//Sample Input: eagerer
//Sample output: number of vowels -> 4

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

bool isVowel(char c) {
    c = tolower(c); // Convert to lowercase for uniformity
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main(){
	vector <string> s{"eagerer"};
int vowelCount;
     for(auto i:s[0]){
     	isVowel(i)?vowelCount++:vowelCount;
	 }
	cout<<vowelCount;
}

