#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	while (true) {
		int a, b, c;
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
			break;

		if (a == 0)
			cout << c / b << " " << b << " " << c << "\n";
		else if (b == 0)
			cout << a << " " << c / a << " " << c << "\n";
		else if (c == 0)
			cout << a << " " << b << " " << a * b << "\n";
	}

}