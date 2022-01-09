#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int* arr = new int[n];

	for (int i = 1; i <= n; i++) {
		arr[i - 1] = i;
	}

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;

		reverse(arr + (a - 1), arr + b);
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}