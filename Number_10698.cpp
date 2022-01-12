#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	int test;
	cin >> test;

	for (int i = 0; i < test; i++) {
		int a, b, c;
		string op, temp;

		cin >> a >> op >> b >> temp >> c;

		cout << "Case " << i + 1 << ": ";

		if (op == "+") {
			if (a + b == c)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
		else {
			if (a - b == c)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}
}