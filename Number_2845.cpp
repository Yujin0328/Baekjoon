#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


int main() {
	int people, party, number = 0, arr[5];
	cin >> people >> party;
	number = people * party;

	for (int i = 0; i < 5; i++) {
		int input;
		cin >> input;
		arr[i] = input - number;
	}

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
}