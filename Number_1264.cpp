#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<int> vector;

	while (true) {
		string s;
		int count = 0;
		getline(cin, s);

		if (s.compare("#") == 0)
			break;

		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
				s[i] == 'o' || s[i] == 'u' || s[i] == 'A' ||
				s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
				s[i] == 'U') {
				count++;
			}
		}
		vector.push_back(count);
	}

	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i] << "\n";
	}
}