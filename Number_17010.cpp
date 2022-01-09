#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int test;
	cin >> test;
	int* count = new int[test];
	char* character = new char[test];

	for (int i = 0; i < test; i++) {
		int inputcount;
		char inputcharacter;
		cin >> inputcount >> inputcharacter;
		count[i] = inputcount;
		character[i] = inputcharacter;
	}

	for (int i = 0; i < test; i++) {
		for (int j = 0; j < count[i]; j++) {
			cout << character[i];
		}
		cout << "\n";
	}
}