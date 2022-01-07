#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int sum = 0, count;
	cin >> count;

	for (int i = 0; i < count; i++) {
		int student, apple;
		cin >> student >> apple;
		sum += apple % student;
	}

	cout << sum;
}