#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int num, sum = 0;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		if (num % i == 0)
			sum += i;
	}

	cout << sum;
}