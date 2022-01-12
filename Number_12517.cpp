#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int test;
	cin >> test;

	int* result = new int[test];
	string* namearr = new string[test];
	for (int i = 0; i < test; i++) {
		string name;
		cin >> name;
		namearr[i] = name;
		if (name[name.length() - 1] == 'y')
			result[i] = 3;
		else if (name[name.length() - 1] == 'a' ||
			name[name.length() - 1] == 'e' ||
			name[name.length() - 1] == 'i' ||
			name[name.length() - 1] == 'o' ||
			name[name.length() - 1] == 'u')
			result[i] = 2;
		else
			result[i] = 1;
	}

	for (int i = 0; i < test; i++) {
		cout << "Case #" << i + 1 << ": " << namearr[i] << " is ruled by ";
		if (result[i] == 1)
			cout << "a king.\n";
		else if (result[i] == 2)
			cout << "a queen.\n";
		else
			cout << "nobody.\n";
	}
}