#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<string> vector;

	while (true) {
		string input, end = "END";
		getline(cin, input);
		if (input.compare(end) == 0) break;
		reverse(input.begin(), input.end());
		vector.push_back(input);
	}

	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i] << "\n";
	}
}