#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	int row = 0, max = 0;

	int test;
	cin >> test;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < test; j++) {
			int input;
			cin >> input;
			if (max < input) {
				max = input;
				row = i;
			}
		}
	}

	switch (row) {
	case 0: cout << "PROBRAIN"; break;
	case 1: cout << "GROW"; break;
	case 2: cout << "ARGOS"; break;
	case 3: cout << "ADMIN"; break;
	case 4: cout << "ANT"; break;
	case 5: cout << "MOTION"; break;
	case 6: cout << "SPG"; break;
	case 7: cout << "COMON"; break;
	case 8: cout << "ALMIGHTY"; break;
	}
}