#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int n, m;
	cin >> n >> m;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		arr[i] = 0;


	for (int i = 0; i < m; i++) {
		int a, b, num;
		cin >> a >> b >> num;
		a--;
		b--;
		for (int j = a; j <= b; j++) {
			arr[j] = num;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}