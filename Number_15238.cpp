#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int alph[26], max = 0, ascii = 0;
	for (int i = 0; i < 26; i++) {
		alph[i] = 0;
	}

	int num;
	string input;
	cin >> num >> input;

	for (int i = 0; i < input.length(); i++) {
		int temp = (int)input[i] - 97;
		alph[temp]++;
	}

	for (int i = 0; i < 26; i++) {
		if (alph[i] > max) {
			max = alph[i];
			ascii = i;
		}
	}

	cout << char(ascii + 97) << " " << max;
}