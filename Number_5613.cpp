#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	long long result;
	cin >> result;

	while (true) {
		char sign;
		long long num;
		cin >> sign >> num;
		if (sign == '=')
			break;
		else {
			switch (sign) {
			case '+': result += num; break;
			case '-': result -= num; break;
			case '*': result *= num; break;
			case '/': result /= num; break;
			}
		}
	}

	cout << result;
}