#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	double x1, y1, r1, x2, y2, r2;

	cin >> x1 >> y1 >> r1;
	cin >> x2 >> y2 >> r2;

	double distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

	double r_sum = r1 + r2;

	if (distance < r_sum)
		cout << "YES";
	else
		cout << "NO";
}