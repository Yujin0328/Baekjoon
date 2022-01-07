#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int number;
	cin >> number;
	int* arr = new int[number];

	for (int i = 0; i < number; i++) {
		int first, second;
		cin >> first >> second;
		if (first < second)
			arr[i] = 0;
		else
			arr[i] = 1;
	}

	for (int i = 0; i < number; i++) {
		if (arr[i] == 0)
			cout << "NO BRAINS";
		else
			cout << "MMM BRAINS";
		cout << "\n";
	}


}