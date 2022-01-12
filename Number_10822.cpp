#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int sum = 0;
	string s, temp;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] != ',') {
			temp += s[i];
		}
		else {
			sum += stoi(temp);
			temp = ' ';
		}
	}
	sum += stoi(temp);
	cout << sum;
}