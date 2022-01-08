#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int uni_score[2] = { 0,0 };

	for (int i = 0; i < 2; i++) {
		int arr[10] = { 0,0,0,0,0,0,0,0,0,0 }, sum = 0;
		for (int j = 0; j < 10; j++) {
			int score;
			cin >> score;
			arr[j] = score;
		}

		sort(arr, arr + 10);

		for (int k = 9; k >= 7; k--) {
			sum += arr[k];
		}

		uni_score[i] = sum;
	}

	for (int i = 0; i < 2; i++)
		cout << uni_score[i] << " ";

}