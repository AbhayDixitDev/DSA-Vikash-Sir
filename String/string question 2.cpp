//2.	 Write a C++ program to change only every letter in a given string with the letter 
//following it in the alphabet (i.e. a becomes b, p becomes q, z becomes a).
//Example:
//Sample Input: cybrom
//Sample Output: dzcspn

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string input = "Cybrom";
    vector<string> v1;
    v1.push_back(input);
    cout<< "Original: "<<v1[0]<<"\n";
    for (char& c : v1[0]) {
        c = static_cast<char>(static_cast<int>(c) + 1);
    }
    
    cout << "Changed: " << v1[0]<< endl;
    return 0;
}



