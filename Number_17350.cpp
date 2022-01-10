#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	int test, count = 0;
	cin >> test;

	for (int i = 0; i < test; i++) {
		string s;
		cin >> s;
		if (s.length() == 3) {
			if (s[0] == 'A' || s[0] == 'a') {
				if (s[1] == 'N' || s[1] == 'n') {
					if (s[2] == 'J' || s[2] == 'j') {
						count = 1;
					}
				}
			}
		}
	}

	if (count == 1)
		cout << "构具;";
	else
		cout << "构具?";
}