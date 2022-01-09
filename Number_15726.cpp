#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;


int main() {
	double a, b, c;
	double ex1, ex2;
	cin >> a >> b >> c;
	ex1 = a * b / c;
	ex2 = a / b * c;

	cout << (long long)max(ex1, ex2);
}