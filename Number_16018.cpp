#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	string yesterday, today;
	int num;
	cin >> num >> yesterday >> today;
	int count = 0;

	for (int i = 0; i < num; i++) {
		if (yesterday[i] == 'C' && today[i] == 'C')
			count++;
	}

	cout << count;
}