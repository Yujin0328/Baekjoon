#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int input, cal = 0;
	cin >> input;

	cal = 5 * input - 400;
	cout << cal << "\n";
	if (cal > 100)
		cout << -1;
	else if (cal == 100)
		cout << 0;
	else
		cout << 1;
}