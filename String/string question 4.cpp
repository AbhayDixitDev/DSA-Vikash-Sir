//4.	Write a C++ program to find the largest word in a given string.
//Example:
//Sample Input: C++ is a programming language.
//Sample Output: programming


#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
    stringstream ss(input);
    string word, largestWord;
    
    while (ss >> word) {
        if (word.length() > largestWord.length()) {
            largestWord = word;
        }
    }
    
    cout << "Largest word: " << largestWord << endl;
    return 0;
}
