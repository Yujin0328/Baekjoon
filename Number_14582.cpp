#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int woolim[9] = { 0,0,0,0,0,0,0,0,0 };
	int start[9] = { 0,0,0,0,0,0,0,0,0 };

	int check = 0, w_sum = 0, s_sum = 0;

	for (int i = 0; i < 9; i++) {
		int input;
		cin >> input;
		woolim[i] = input;
	}

	for (int i = 0; i < 9; i++) {
		int input;
		cin >> input;
		start[i] = input;
	}

	for (int i = 0; i < 9; i++) {
		w_sum += woolim[i];
		if (w_sum > s_sum)
			check = 1;
		s_sum += start[i];
		if (w_sum > s_sum)
			check = 1;
	}

	if (check == 1 && w_sum < s_sum)
		cout << "Yes";
	else
		cout << "No";
}