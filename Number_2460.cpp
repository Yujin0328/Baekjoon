#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int people_comparison(int max, int now) {
	if (max < now)
		max = now;
	return max;
}

int main() {
	int max = 0;
	int now = 0;

	for (int i = 0; i < 10; i++) {
		int out, in;
		cin >> out >> in;

		now -= out;
		max = people_comparison(max, now);
		now += in;
		max = people_comparison(max, now);
	}
	cout << max;
}