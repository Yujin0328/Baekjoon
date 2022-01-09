#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int arr[26], max = 0, count = 0;
	for (int i = 0; i < 26; i++) {
		arr[i] = 0;
	}

	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		int num = (int)s[i];

		if (num < 97)
			num -= 65;
		else
			num -= 97;

		arr[num]++;
	}

	for (int i = 0; i < 26; i++) {
		if (count < arr[i]) {
			count = arr[i];
			max = i;
		}
	}

	sort(arr, arr + 26);

	if (count == arr[24])
		cout << "?";
	else {
		cout << char(max + 65);
	}
}