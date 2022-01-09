#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int applescore = 0, bananascore = 0;

	for (int i = 3; i >= 1; i--) {
		int input;
		cin >> input;
		applescore += input * i;
	}
	for (int i = 3; i >= 1; i--) {
		int input;
		cin >> input;
		bananascore += input * i;
	}

	if (applescore > bananascore)
		cout << 'A';
	else if (applescore < bananascore)
		cout << 'B';
	else
		cout << 'T';
}