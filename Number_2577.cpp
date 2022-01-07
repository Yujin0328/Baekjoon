#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int a, b, c, count = 0, result;
	int arr[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	cin >> a >> b >> c;
	result = a * b * c;
	while (true) {
		int temp = result % 10;
		arr[temp]++;
		result /= 10;
		if (result < 10) break;
	}
	arr[result]++;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}
}