#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int test;
	cin >> test;

	int* arr = new int[test];

	for (int i = 0; i < test; i++) {
		string s;
		cin >> s;

		if ((int)s[s.length() - 1] % 2 == 0) {
			arr[i] = 0;
		}
		else
			arr[i] = 1;
	}

	for (int i = 0; i < test; i++) {
		if (arr[i] == 0)
			cout << "even\n";
		else
			cout << "odd\n";
	}
}