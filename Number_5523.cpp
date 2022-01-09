#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int n, awin = 0, bwin = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if (a > b)
			awin++;
		else if (a < b)
			bwin++;
	}

	cout << awin << " " << bwin;
}