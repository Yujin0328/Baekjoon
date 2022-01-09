#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;


int main() {
	double PI = 3.141592;

	int width, r;
	cin >> width >> r;

	double result = 2 * PI * r + 2 * width;

	printf("%.6f", result);

}