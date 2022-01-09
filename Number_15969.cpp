#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int student;
	cin >> student;

	int* score = new int[student];

	for (int i = 0; i < student; i++) {
		int input;
		cin >> input;
		score[i] = input;
	}

	sort(score, score + student);

	cout << score[student - 1] - score[0];
}