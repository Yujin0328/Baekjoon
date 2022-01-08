#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
	long long a, b, c;
	int arr[10] = { 0,0,0,0,0,0,0,0,0,0 };
	cin >> a >> b >> c;

	string s = to_string(a * b * c);

	for (int i = 0; i < s.length(); i++) {
		char ch = s[i];
		int temp = ch - '0';
		arr[temp]++;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}

}