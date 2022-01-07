#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


int main() {
	int case_number, people;
	cin >> case_number;
	string* arr = new string[case_number];

	for (int i = 0; i < case_number; i++) {
		cin >> people;
		int max = 0;
		for (int j = 0; j < people; j++) {
			int money;
			string name;
			cin >> money >> name;
			if (max < money) {
				max = money;
				arr[i] = name;
			}
		}
	}

	for (int i = 0; i < case_number; i++) {
		cout << arr[i] << "\n";
	}
}