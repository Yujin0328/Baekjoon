#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int first, second, third;

	cin >> first;
	cin >> second;

	third = second + (second - first);

	cout << third;
}