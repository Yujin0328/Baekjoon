#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;

	int first = n * 0.78;

	int second = n - (n * 0.2) * 0.22;

	cout << first << " " << second;
}