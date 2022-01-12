#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int num;
	cin >> num;

	string input;
	cin >> input;

	for (int i = num - 5; i < num; i++) {
		cout << input[i];
	}
}