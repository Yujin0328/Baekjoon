#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	while (true) {
		string input;
		getline(cin, input);
		if (input == "#") break;

		vector<string> vector;

		for (int i = 0; i < input.length(); i++) {
			if (isspace(input[i]) != 0)
				vector.push_back("%20");
			else if (input[i] == '!')
				vector.push_back("%21");
			else if (input[i] == '$')
				vector.push_back("%24");
			else if (input[i] == '%')
				vector.push_back("%25");
			else if (input[i] == '(')
				vector.push_back("%28");
			else if (input[i] == ')')
				vector.push_back("%29");
			else if (input[i] == '*')
				vector.push_back("%2a");
			else {
				string temp(1, input[i]);
				vector.push_back(temp);
			}
		}

		for (int i = 0; i < vector.size(); i++) {
			cout << vector[i];
		}
		cout << "\n";
	}
}