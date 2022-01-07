#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int sum = 0, count;
	cin >> count;
	vector<int> candy;
	vector<int> people;

	for (int i = 0; i < count; i++) {
		int c, p;
		cin >> c >> p;
		candy.push_back(c);
		people.push_back(p);
	}

	for (int i = 0; i < count; i++) {
		cout << "You get " << candy[i] / people[i]
			<< " piece(s) and your dad gets " << candy[i] % people[i] << " piece(s).\n";
	}
}