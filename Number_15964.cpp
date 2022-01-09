#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

long long int cal(long long a, long long b) {
	long long int result = (a + b) * (a - b);

	return result;
}


int main() {
	long long a, b;
	cin >> a >> b;
	long long int output = cal(a, b);
	printf("%lld", output);
}