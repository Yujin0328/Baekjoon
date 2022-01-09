#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int test;
	cin >> test;
	int* arr = new int[test];

	for (int i = 0; i < test; i++) {
		string a, b;
		int count = 0;
		cin >> a >> b;
		for (int j = 0; j < a.length(); j++) {
			if (a[j] != b[j])
				count++;
		}
		arr[i] = count;
	}

	for (int i = 0; i < test; i++)
		cout << "Hamming distance is " << arr[i] << ".\n";
}