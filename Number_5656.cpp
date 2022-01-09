#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	vector<int> vector;

	while (true) {
		int a, b;
		string op;
		cin >> a >> op >> b;
		if (op == "E")
			break;
		else if (op == ">") {
			if (a > b) vector.push_back(1);
			else vector.push_back(0);
		}
		else if (op == ">=") {
			if (a >= b) vector.push_back(1);
			else vector.push_back(0);
		}
		else if (op == "<") {
			if (a < b) vector.push_back(1);
			else vector.push_back(0);
		}
		else if (op == "<=") {
			if (a <= b) vector.push_back(1);
			else vector.push_back(0);
		}
		else if (op == "==") {
			if (a == b) vector.push_back(1);
			else vector.push_back(0);
		}
		else if (op == "!=") {
			if (a != b) vector.push_back(1);
			else vector.push_back(0);
		}
	}

	for (int i = 0; i < vector.size(); i++) {
		cout << "Case " << i + 1 << ": ";
		if (vector[i] == 1)
			cout << "true\n";
		else
			cout << "false\n";
	}
}