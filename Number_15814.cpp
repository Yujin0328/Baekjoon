#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	string s;
	cin >> s;

	int test;
	cin >> test;

	for (int i = 0; i < test; i++) {
		int a, b;
		char temp;
		cin >> a >> b;

		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
	}

	cout << s;
}