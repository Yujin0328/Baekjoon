#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
	int arr[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		int change = (int)s[i];
		arr[change - 97]++;
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
}