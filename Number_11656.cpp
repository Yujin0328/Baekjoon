#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string input;
	cin >> input;

	string* arr = new string[input.length()];

	for (int i = 0; i < input.length(); i++) {
		string temp;
		for (int j = i; j < input.length(); j++) {
			temp += input[j];
		}
		arr[i] = temp;
	}

	sort(arr, arr + input.length());

	for (int i = 0; i < input.length(); i++) {
		cout << arr[i] << "\n";
	}
}