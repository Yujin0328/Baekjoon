#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int h, j;
	long long hmax = 0, jmax = 0;
	cin >> h >> j;

	for (int i = 0; i < h; i++) {
		long long inputh;
		cin >> inputh;

		if (hmax < inputh)
			hmax = inputh;
	}

	for (int i = 0; i < j; i++) {
		long long inputj;
		cin >> inputj;

		if (jmax < inputj)
			jmax = inputj;
	}

	cout << hmax + jmax;
}