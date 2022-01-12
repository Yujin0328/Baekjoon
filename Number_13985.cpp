#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int a, b, c;
	char op, temp;
	cin >> a >> op >> b >> temp >> c;

	if (a + b == c)
		cout << "YES";
	else
		cout << "NO";
}