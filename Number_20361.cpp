#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int n, x, k;
	cin >> n >> x >> k;
	int now = x;

	for (int i = 0; i < k; i++) {
		int a, b;
		cin >> a >> b;

		if (now == a) {
			now = b;
		}
		else if (now == b) {
			now = a;
		}
	}

	cout << now;
}