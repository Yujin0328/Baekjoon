#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int a = 0, b = 0, c = 0, time = 0;
	cin >> time;


	if (time >= 300) {
		a += time / 300;
		time = time % 300;
	}
	if (time >= 60) {
		b += time / 60;
		time = time % 60;
	}
	if (time >= 10) {
		c += time / 10;
		time = time % 10;
	}

	if (time != 0)
		cout << -1;
	else
		cout << a << " " << b << " " << c;

}