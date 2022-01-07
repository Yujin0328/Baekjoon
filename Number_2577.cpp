#include <stdio.h> 
#include <iostream> 
#include <string> 
using namespace std; 

int main() {
	int a, b, c, result;
	int arr[10] = { 0,0,0,0,0,0,0,0,0 };

	cin >> a >> b >> c;
	result = a * b * c;

	while (true) {
		if (result < 10) {
			arr[result]++;
			break;
		}
		else if (result >= 10) {
			int temp = result % 10;
			arr[temp]++;
			result /= 10;
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}
}