#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	long long n, m;
	cin >> n >> m;

	if (n == m)
		cout << 1;
	else
		cout << 0;
}