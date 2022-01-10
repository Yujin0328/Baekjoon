#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int test;
	cin >> test;
	cin.ignore();
	string* arr = new string[test];

	for (int i = 0; i < test; i++) {
		string input;
		getline(cin, input);
		arr[i] = input;
	}

	for (int i = 0; i < test; i++) {
		cout << i + 1 << ". " << arr[i] << "\n";
	}
}