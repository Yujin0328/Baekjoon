#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int answer[11];
	answer[0] = -1;
	for (int i = 1; i <= 10; i++) {
		answer[i] = (i - 1) % 5 + 1;
	}

	int student;
	cin >> student;
	int* arr = new int[student];
	for (int i = 0; i < student; i++) {
		int count = 0;
		for (int j = 1; j <= 10; j++) {
			int input;
			cin >> input;
			if (input == answer[j])
				count++;
		}
		if (count == 10)
			arr[i] = 1;
		else
			arr[i] = 0;
	}
	for (int i = 0; i < student; i++) {
		if (arr[i] == 1)
			cout << i + 1 << "\n";
	}
}