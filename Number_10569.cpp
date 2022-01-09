#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int test;
	cin >> test;
	int* arr = new int[test];

	for (int i = 0; i < test; i++) {
		int v, e;
		cin >> v >> e;
		arr[i] = 2 - v + e;
	}

	for (int i = 0; i < test; i++) {
		cout << arr[i] << "\n";
	}
}