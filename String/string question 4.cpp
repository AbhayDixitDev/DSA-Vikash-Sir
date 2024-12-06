//4.	Write a C++ program to find the largest word in a given string.
//Example:
//Sample Input: C++ is a programming language.
//Sample Output: programming

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input = "C++ is a programming language";
    string largestWord = "";
    string currentWord = "";
    
    for (char c : input) {
        if (c == ' ') {
            if (currentWord.length() > largestWord.length()) {
                largestWord = currentWord;
            }
            currentWord = "";
        } else {
            currentWord += c;
        }
    }
    
    if (currentWord.length() > largestWord.length()) {
        largestWord = currentWord;
    }
    
    cout << "Largest word: " << largestWord << endl;
    
    return 0;
}