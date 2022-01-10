#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	long long n;
	cin >> n;
	vector<int> vector;

	while (n > 0) {
		vector.push_back(n % 2);
		n /= 2;
	}

	for (int i = vector.size() - 1; i >= 0; i--) {
		if (i == vector.size() - 1 && vector[i] == 0)
			continue;
		cout << vector[i];
	}

}