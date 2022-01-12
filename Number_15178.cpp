#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int test;
	cin >> test;

	for (int i = 0; i < test; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		cout << a << " " << b << " " << c << " ";
		if (a + b + c == 180)
			cout << "Seems OK\n";
		else
			cout << "Check\n";
	}
}