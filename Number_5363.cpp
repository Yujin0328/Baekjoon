#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int test;
	cin >> test;
	cin.ignore();
	string* result = new string[test];

	for (int i = 0; i < test; i++) {
		string first, second, all;
		cin >> first;
		cin >> second;
		cin.ignore();
		getline(cin, all);
		all += " " + first + " " + second;
		result[i] = all;
	}

	for (int i = 0; i < test; i++) {
		cout << result[i] << "\n";
	}
}