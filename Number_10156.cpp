#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int k, n, m;
	cin >> k >> n >> m;

	if (k * n > m)
		cout << k * n - m;
	else
		cout << 0;
}