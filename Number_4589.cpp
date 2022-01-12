#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int test;
	cin >> test;
	bool* arr = new bool[test];

	for (int i = 0; i < test; i++) {
		int a, b, c;
		cin >> a >> b >> c;

		if (a < b && b < c)
			arr[i] = true;
		else if (a > b && b > c)
			arr[i] = true;
		else
			arr[i] = false;
	}

	cout << "Gnomes:\n";
	for (int i = 0; i < test; i++) {
		if (arr[i] == true)
			cout << "Ordered\n";
		else
			cout << "Unordered\n";
	}
}