#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;


int main() {
	int n, m;
	cin >> n >> m;

	int* arr = new int[n * m];

	for (int i = 0; i < n * m; i++) {
		int input;
		cin >> input;
		arr[i] = input;
	}
	for (int i = 0; i < n * m; i++) {
		int input;
		cin >> input;
		arr[i] += input;
	}

	for (int i = 0; i < n * m; i += m) {
		for (int j = 0; j < m; j++) {
			cout << arr[i + j] << " ";
		}
		cout << "\n";
	}
}