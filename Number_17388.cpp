#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int sum = 0, arr[3], min = 100;

	for (int i = 0; i < 3; i++) {
		int input;
		cin >> input;
		arr[i] = input;
		sum += input;
		if (min > input)
			min = input;
	}

	if (sum >= 100)
		cout << "OK";
	else {
		if (min == arr[0])
			cout << "Soongsil";
		else if (min == arr[1])
			cout << "Korea";
		else
			cout << "Hanyang";
	}
}