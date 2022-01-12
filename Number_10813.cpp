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
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}