#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Author Yamal

/*
	This algorithm transform a binary number given as a string into a decimal base value
*/

int binaryToDecimal(string word);

int main(){
	string word;
	cout << "Enter a binary value: ";
	getline(cin, word);

	int value = binaryToDecimal(word);

	if (value == -1)
		cout << "Error on input" << endl;
	else
		cout << word << " --> " << value << endl;

	return 0;
}

int binaryToDecimal(string word){

	const char *tmp = word.c_str();
  	int size = word.length();
  	int end = size - 1;
  	int res = 0;

  	for (int i = 0; i < size; i++){//TODO: In case that a different char from 1 or 0 is detected, return -1
  		if (tmp[i] != '1' && tmp[i] != '0')
  			return -1;
  		res += ((int)tmp[i] - 48) * pow(2, end--);
  	}

    return res;
}
