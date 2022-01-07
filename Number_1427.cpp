#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(int i, int j) {
	return j < i;
}

int main() {
	int n;
	cin >> n;
	vector<int> vector;
	while (n >= 10) {
		vector.push_back(n % 10);
		n /= 10;
	}
	vector.push_back(n);

	sort(vector.begin(), vector.end(), compare);

	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i];
	}
}