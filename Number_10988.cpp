#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string input, change;
	cin >> input;
	change = input;
	reverse(change.begin(), change.end());

	if (input == change)
		cout << 1;
	else
		cout << 0;
}