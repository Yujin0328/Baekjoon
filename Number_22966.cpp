#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int test, minlevel = 4;
	cin >> test;

	string question;

	for (int i = 0; i < test; i++) {
		string s;
		int level;
		cin >> s >> level;

		if (minlevel > level) {
			minlevel = level;
			question = s;
		}
	}

	cout << question;
}