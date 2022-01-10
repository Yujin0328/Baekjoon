#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int a, b, c, d, check = 0;
	cin >> a >> b >> c >> d;

	if (a == 8 || a == 9) {
		if (d == 8 || d == 9) {
			if (b == c)
				check = 1;
		}
	}

	if (check == 1)
		cout << "ignore";
	else
		cout << "answer";
}