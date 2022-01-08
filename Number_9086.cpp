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
		string result;
		result = s[0];
		result += s[s.length() - 1];

		vector.push_back(result);
	}

	for (int i = 0; i < n; i++) {
		cout << vector[i] << "\n";
	}
}