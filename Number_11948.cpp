#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int first[4] = { 0,0,0,0 };
	int second[2] = { 0,0 };
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		int score;
		cin >> score;
		first[i] = score;
	}

	for (int i = 0; i < 2; i++) {
		int score;
		cin >> score;
		second[i] = score;
	}

	sort(first, first + 4);
	sort(second, second + 2);

	for (int i = 1; i < 4; i++) {
		sum += first[i];
	}
	sum += second[1];

	cout << sum;
}