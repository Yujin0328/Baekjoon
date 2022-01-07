#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int n, k, count = 0, i = 1, result = 0;
	cin >> n >> k;

	while (i <= n) {
		if (n % i == 0) {
			if (k == ++count) {
				result = i;
				break;
			}
		}
		i++;
	}
	cout << result;
}