#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {
	int arr[26];
	for (int i = 0; i < 26; i++)
		arr[i] = -1;

	string input;
	cin >> input;

	for (int i = 0; i < input.length(); i++) {
		int num = (int)input[i] - 97;
		if (arr[num] == -1)
			arr[num] = i;
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}

}