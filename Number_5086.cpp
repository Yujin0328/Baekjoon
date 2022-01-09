#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int> result;

	while (true) {
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;
		else if (b % a == 0)
			result.push_back(1);
		else if (a % b == 0)
			result.push_back(2);
		else
			result.push_back(3);
	}

	for (int i = 0; i < result.size(); i++) {
		if (result[i] == 1)
			cout << "factor";
		else if (result[i] == 2)
			cout << "multiple";
		else
			cout << "neither";
		cout << "\n";
	}
}