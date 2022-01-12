#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	while (true) {
		int alph[26], check = 0;
		for (int i = 0; i < 26; i++) {
			alph[i] = 0;
		}

		string input;
		getline(cin, input);
		if (input == "END") break;

		for (int i = 0; i < input.length(); i++) {
			if (isspace(input[i]) == 0) {
				int temp = (int)input[i] - 65;
				alph[temp]++;
			}
		}
		for (int j = 0; j < 26; j++) {
			if (alph[j] > 1)
				check = 1;
		}

		if (check != 1)
			cout << input << "\n";
	}
}