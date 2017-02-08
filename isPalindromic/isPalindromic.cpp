#include <iostream>
#include <string>
using namespace std;

//Author: Yamal

/*
    This algorithm checks if a given word is a palindrome
*/

bool isPalindromic(string word);

int main() {
    string word;
    cout << "Enter a word:";
    getline (cin, word);
  
    if (isPalindromic(word))
        cout << "It is a palindrome.\n";
    else
        cout << "It is not a palindrome.\n";

  
  return 0;
}

bool isPalindromic(string word){
    
    const char *tmp = word.c_str();
  
    int ini = 0, fin = word.length() - 1;
  
    while (ini < fin) {  
        if (tmp[ini++] != tmp[fin--]){
            return false;
        }
    }
    
    return true;
}