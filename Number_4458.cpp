#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	int test;
	cin >> test;
	cin.ignore();

	for (int i = 0; i < test; i++) {
		string input;
		getline(cin, input);

		if (input[0] >= 'a' && input[0] <= 'z')
			input[0] = input[0] - 'a' + 'A';

		cout << input << "\n";
	}
}