#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int fibo(int n) {
	if (n == 0)
		return 0;
	else if (n < 3)
		return 1;
	else
		return fibo(n - 1) + fibo(n - 2);
}

int main() {
	int n;
	cin >> n;

	cout << fibo(n);
}