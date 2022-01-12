#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int test;
	cin >> test;

	for (int i = 0; i < test; i++) {
		string name;
		cin >> name;
		char last = name[name.length() - 1];

		cout << "Case #" << i + 1 << ": " << name << " is ruled by ";

		if (last == 'y')
			cout << "nobody.\n";
		else if (last == 'a' || last == 'e' || last == 'i'
			|| last == 'o' || last == 'u')
			cout << "a queen.\n";
		else
			cout << "a king.\n";
	}
}