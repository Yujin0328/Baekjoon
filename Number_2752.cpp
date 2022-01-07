#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int arr[] = { a, b, c };
	sort(arr, arr + 3);

	for (int i = 0; i < 3; i++) {
		cout << arr[i] << " ";
	}
}