#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<int> vector;

	while (true) {
		string input;
		getline(cin, input);
		if (input == "#") break;

		int alph[26];
		for (int i = 0; i < 26; i++) {
			alph[i] = 0;
		}

		for (int i = 0; i < input.length(); i++) {
			int temp = (int)input[i];
			if (temp >= 65 && temp <= 90) {
				temp -= 65;
				alph[temp] = 1;
			}
			else if (temp >= 97 && temp <= 122) {
				temp -= 97;
				alph[temp] = 1;
			}


		}
		int count = 0;
		for (int i = 0; i < 26; i++) {
			if (alph[i] == 1)
				count++;
		}
		vector.push_back(count);
	}

	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i] << "\n";
	}
}