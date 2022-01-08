#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;


int main() {
	int count = 0;
	string s;
	getline(cin, s);

	if (s[0] != '-' && s[0] != '0')
		count++;

	for (int i = 1; i < s.length(); i++) {
		if (s[i] == ' ' && s[i + 1] != '-' && s[i + 1] != '0')
			count++;
	}

	cout << count;
}