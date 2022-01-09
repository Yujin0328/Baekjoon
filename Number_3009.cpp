#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;


int main() {
	int x[3], y[3], resultx, resulty;

	for (int i = 0; i < 3; i++) {
		int inputx, inputy;
		cin >> inputx >> inputy;
		x[i] = inputx;
		y[i] = inputy;
	}

	sort(x, x + 3);
	sort(y, y + 3);

	if (x[0] == x[1])
		resultx = x[2];
	else
		resultx = x[0];
	if (y[0] == y[1])
		resulty = y[2];
	else
		resulty = y[0];

	cout << resultx << " " << resulty;
}