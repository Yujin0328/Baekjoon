#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	int test;
	cin >> test;
	int* money = new int[test];

	for (int i = 0; i < test; i++) {
		int s, option;
		cin >> s >> option;
		for (int j = 0; j < option; j++) {
			int q, p;
			cin >> q >> p;
			s += q * p;
		}
		money[i] = s;
	}

	for (int i = 0; i < test; i++) {
		cout << money[i] << "\n";
	}
}