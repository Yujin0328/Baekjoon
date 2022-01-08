#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if ((int)s[i] < 97)
			s[i] += 32;
		else
			s[i] -= 32;
	}

	cout << s;
}