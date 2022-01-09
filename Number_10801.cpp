#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;


int main() {
	int acard[10], bcard[10];
	int awin = 0, bwin = 0;
	for (int i = 0; i < 10; i++) {
		int input;
		cin >> input;
		acard[i] = input;
	}

	for (int i = 0; i < 10; i++) {
		int input;
		cin >> input;
		bcard[i] = input;
	}

	for (int i = 0; i < 10; i++) {
		if (acard[i] > bcard[i])
			awin++;
		else if (acard[i] < bcard[i])
			bwin++;
	}

	if (awin > bwin)
		cout << "A";
	else if (awin < bwin)
		cout << "B";
	else
		cout << "D";
}