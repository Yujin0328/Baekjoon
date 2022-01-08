#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		char test = s[i];
		if (test != 'C' && test != 'A' && test != 'M' &&
			test != 'B' && test != 'R' && test != 'I' &&
			test != 'D' && test != 'G' && test != 'E')
			cout << test;
	}
}