#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int v, a = 0, b = 0;
	cin >> v;
	for (int i = 0; i < v; i++) {
		char vote;
		cin >> vote;
		if (vote == 'A')
			a++;
		else
			b++;
	}

	if (a > b)
		cout << "A";
	else if (a < b)
		cout << "B";
	else
		cout << "Tie";
}