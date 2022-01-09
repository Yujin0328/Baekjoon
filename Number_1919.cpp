#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {
	string first, second;
	int count = 0;
	cin >> first >> second;

	int arrfirst[26];
	int arrsecond[26];

	for (int i = 0; i < 26; i++) {
		arrfirst[i] = 0;
		arrsecond[i] = 0;
	}

	for (int i = 0; i < first.length(); i++) {
		int temp = (int)first[i] - 97;
		arrfirst[temp]++;
	}
	for (int i = 0; i < second.length(); i++) {
		int temp = (int)second[i] - 97;
		arrsecond[temp]++;
	}

	for (int i = 0; i < 26; i++) {
		if (arrfirst[i] != arrsecond[i]) {
			count += abs(arrfirst[i] - arrsecond[i]);
		}
	}

	cout << count;
}