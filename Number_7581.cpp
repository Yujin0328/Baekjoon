#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	while (true) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		if (a == 0 && b == 0 && c == 0 && d == 0)
			break;

		if (d == 0) {
			cout << a << " " << b << " " << c << " " << a * b * c << "\n";
		}
		else if (a == 0) {
			cout << d / (b * c) << " " << b << " " << c << " " << d << "\n";
		}
		else if (b == 0) {
			cout << a << " " << d / (a * c) << " " << c << " " << d << "\n";
		}
		else if (c == 0) {
			cout << a << " " << b << " " << d / (a * b) << " " << d << "\n";
		}
		else
			cout << a << " " << b << " " << c << " " << d << "\n";
	}
}