#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int arr[] = { 0,0,0,0,0 };
	int count = 0;

	for (int i = 0; i < 5; i++) {
		string input;
		cin >> input;

		for (int j = 0; j < input.length() - 2; j++) {
			if (input[j] == 'F' && input[j + 1] == 'B' && input[j + 2] == 'I') {
				arr[i] = i + 1;
				count = 1;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		if (count == 0) {
			cout << "HE GOT AWAY!";
			break;
		}
		else if (arr[i] != 0)
			cout << arr[i] << " ";
	}
}