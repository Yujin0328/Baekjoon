#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;


int main() {
	char* arr[3];

	for (int i = 0; i < 3; i++) {
		int count = 0;
		for (int j = 0; j < 4; j++) {
			int input;
			cin >> input;
			if (input == 1)
				count++;
		}
		switch (count) {
		case 0: arr[i] = "D"; break;
		case 1: arr[i] = "C"; break;
		case 2: arr[i] = "B"; break;
		case 3: arr[i] = "A"; break;
		case 4: arr[i] = "E"; break;
		}
	}

	for (int i = 0; i < 3; i++) {
		cout << arr[i] << "\n";
	}
}