#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int task, goal, count = 0, time = 0, k = 0;
	cin >> task >> goal;

	for (int i = 0; i < task; i++) {
		int input;
		cin >> input;

		if (input + time > goal)
			break;
		else {
			time += input;
			count++;
		}
	}

	cout << count;
}