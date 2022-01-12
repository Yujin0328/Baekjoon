#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	int test;
	cin >> test;

	int* arr = new int[test];
	int check = 0;
	for (int i = 0; i < test; i++) {
		int input;
		cin >> input;
		arr[i] = input;
	}

	int max = arr[test - 1];
	int count = 0;
	for (int i = 1; i <= max; i++) {
		if (arr[count] == i) {
			count++;
			check++;
		}
		else {
			cout << i << "\n";
		}
	}

	if (check == max)
		cout << "good job";

}