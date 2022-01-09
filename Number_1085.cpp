#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;


int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int calx, caly;
	calx = w - x;
	caly = h - y;

	int minx = calx < x ? calx : x;
	int miny = caly < y ? caly : y;

	if (minx < miny)
		cout << minx;
	else
		cout << miny;
}