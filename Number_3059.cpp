#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int test;
	cin >> test;
	int* result = new int[test];
	for (int i = 0; i < test; i++) {
		int alph[26] = { 0 };
		int sum = 0;
		string s;
		cin >> s;

		for (int j = 0; j < s.length(); j++) {
			int num = (int)s[j] - 65;
			alph[num]++;
		}

		for (int j = 0; j < 26; j++) {
			if (alph[j] == 0)
				sum += (j + 65);
		}
		result[i] = sum;
	}

	for (int i = 0; i < test; i++) {
		cout << result[i] << "\n";
	}
}