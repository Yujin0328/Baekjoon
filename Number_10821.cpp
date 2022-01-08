#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;
	int count = 0;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ',') {
			count++;
		}
	}
	cout << ++count;
}