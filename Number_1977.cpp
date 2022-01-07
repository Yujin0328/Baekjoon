#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int m, n, sum = -1;
	double i = 1;
	cin >> m >> n;
	int min = n;

	while (true) {
		int temp = pow(i, 2);
		if (temp > n) break;
		if (temp >= m && temp <= n) {
			sum += temp;
			if (min > temp)
				min = temp;
		}
		i++;
	}

	if (sum != -1)
		cout << ++sum << "\n" << min;
	else
		cout << sum;
}