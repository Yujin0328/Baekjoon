#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int count = 0, num;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		int input;
		cin >> input;
		if (input != i)
			count++;
	}

	cout << count;
}