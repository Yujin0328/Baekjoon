#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> vector;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			if ((int)s.at(j) < 97)
				s[j] = s[j] + 32;
		}
		vector.push_back(s);
	}

	for (int i = 0; i < n; i++) {
		cout << vector[i] << "\n";
	}
}