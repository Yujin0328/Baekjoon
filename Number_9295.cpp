#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int count;
	cin >> count;

	vector<int> vector;

	for (int i = 0; i < count; i++) {
		int first, second;
		cin >> first >> second;

		vector.push_back(first + second);
	}

	for (int i = 0; i < vector.size(); i++) {
		cout << "Case " << i + 1 << ": " << vector[i] << "\n";
	}
}