#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	int test;
	cin >> test;
	int* arr = new int[test];

	for (int i = 0; i < test; i++) {
		string s;
		int count = 0;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == '(')
				count++;
			else {
				count--;
				if (count < 0)
					arr[i] = -1;
			}
		}
		if (count != 0 || arr[i] == -1) {
			arr[i] = -1;
		}
		else {
			arr[i] = 1;
		}
	}

	for (int i = 0; i < test; i++) {
		if (arr[i] == -1)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
}