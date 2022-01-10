#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, m, count = 1;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << count++;
			if (j != m - 1)
				cout << " ";
		}
		cout << "\n";
	}
}