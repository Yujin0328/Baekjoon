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
		int money, q = 0, d = 0, n = 0, p = 0;
		cin >> money;

		q = money / 25;
		money %= 25;
		d = money / 10;
		money %= 10;
		n = money / 5;
		money %= 5;
		p = money;

		cout << q << " " << d << " " << n << " " << p << "\n";
	}

}