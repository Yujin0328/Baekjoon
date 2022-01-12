#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int count = 0, team, teamrate, onerate;
	cin >> team >> teamrate >> onerate;
	vector<int> vector;

	for (int i = 0; i < team; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a + b + c >= teamrate) {
			if (a >= onerate && b >= onerate && c >= onerate) {
				count++;
				vector.push_back(a);
				vector.push_back(b);
				vector.push_back(c);
			}
		}
	}

	cout << count << "\n";
	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i] << " ";
	}
}