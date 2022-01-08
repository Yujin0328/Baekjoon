#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int c, k, p, wine = 0;
	cin >> c >> k >> p;

	for (int i = 1; i <= c; i++) {
		double year = i;
		wine += k * i + p * int(pow(year, 2));
	}

	cout << wine;
}