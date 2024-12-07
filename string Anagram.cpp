//write a  program to find two words are anagram or not

#include <iostream>
#include <string>
using namespace std;

void swap(char &s,char &t){
   if(s>t){
   	char temp=s;
   	s=t;
   	t=temp;
   }	
}

bool isAnagram(string s1,string s2){



    for (int i = 0; i < s1.length(); ++i) {
        for (int j = 0; j < s1.length() - i - 1; ++j) {
            if (s1[j] > s1[j + 1]) {
                swap(s1[j], s1[j + 1]);
            }
              if (s2[j] > s2[j + 1]) {
                swap(s2[j], s2[j + 1]);
            }
            
        }
    }


if(s1==s2){
	return true;
}
else{
	return false;
}


	
	
	
	
}

int main(){
	string s1="silent";
	string s2="listen";
	
	
//	cout<<s1;
	
	isAnagram(s1,s2)?cout<<"yes":cout<<"no";
	
	
	
	
}