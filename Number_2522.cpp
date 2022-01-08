#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;


int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = n - i; j > 0; j--) {
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
			cout << "*";
		cout << "\n";
	}

	for (int i = 1; i <= n - 1; i++) {
		for (int k = 1; k <= i; k++)
			cout << " ";
		for (int j = n - i; j > 0; j--) {
			cout << "*";
		}
		cout << "\n";
	}
}