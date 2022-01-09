#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;


int main() {
	int len, count = 0;
	cin >> len;

	for (int i = 0; i < len; i++) {
		char input;
		cin >> input;
		count += (int)input - 64;
	}

	cout << count;
}