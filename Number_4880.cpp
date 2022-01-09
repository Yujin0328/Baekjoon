#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	vector<string> kinds;
	vector<int> next;

	while (true) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;
		else {
			if (b - a == c - b) {
				kinds.push_back("AP");
				next.push_back(c + (c - b));
			}
			else if (b / a == c / b) {
				kinds.push_back("GP");
				next.push_back(c * (c / b));
			}
		}
	}

	for (int i = 0; i < kinds.size(); i++) {
		cout << kinds[i] << " " << next[i] << "\n";
	}
}