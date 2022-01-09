#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int k = 0, d = 0, a = 0;
	char temp;

	cin >> k >> temp >> d >> temp >> a;

	if (k + a < d || d == 0)
		cout << "hasu";
	else
		cout << "gosu";
}