#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;


int main() {
	double k, d1, d2;
	cin >> k >> d1 >> d2;

	double d = (d1 - d2) / 2;

	double result = pow(k, 2) - pow(d, 2);

	cout << result;
}