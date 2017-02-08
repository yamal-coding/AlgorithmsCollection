#include <iostream>
#include <string>
using namespace std;

//Author: Yamal

/*
    This algorithm checks if a given word is a palindrome
*/

int main() {
    string word;
    cout << "Enter a word:";
    getline (cin, word);
  
    int size = word.length();
  
    const char *tmp = word.c_str();
  
    int ini = 0, fin = size-1;
    bool esCapicua = true;
  
    while (ini < fin) {  
        if (tmp[ini++] != tmp[fin--]){
            esCapicua = false;
            break;
        }
    }
  
    if (esCapicua)
        cout << "It is a palindrome.\n";
    else
        cout << "It is not a palindrome.\n";

  
  return 0;
}
