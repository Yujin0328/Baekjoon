#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int test;
	cin >> test;
	int* result = new int[test];

	for (int i = 0; i < test; i++) {
		int arr[10] = { 0,0,0,0,0,0,0,0,0,0 };
		int count = 0;
		string input;
		cin >> input;
		for (int j = 0; j < input.length(); j++) {
			int temp = (int)input[j] - 48;
			arr[temp] = 1;
		}

		for (int k = 0; k < 10; k++) {
			if (arr[k] == 1)
				count++;
		}
		result[i] = count;
	}

	for (int i = 0; i < test; i++) {
		cout << result[i] << "\n";
	}

}