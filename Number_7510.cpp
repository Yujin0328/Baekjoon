#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int test;
	cin >> test;
	int* scenario = new int[test];
	double abc[3] = { 0 };

	for (int i = 0; i < test; i++) {

		for (int j = 0; j < 3; j++) {
			int input;
			cin >> input;
			abc[j] = input;
		}

		sort(abc, abc + 3);
		if ((pow(abc[0], 2) + pow(abc[1], 2)) == pow(abc[2], 2))
			scenario[i] = 1;
		else
			scenario[i] = 0;
	}

	for (int i = 0; i < test; i++) {
		cout << "Scenario #" << i + 1 << ":\n";
		if (scenario[i] == 1)
			cout << "yes";
		else
			cout << "no";
		cout << "\n\n";
	}
}