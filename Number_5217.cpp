#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

void answer(int n) {
	int middle = n / 2;

	if (n % 2 == 0)
		middle--;

	cout << "Pairs for " << n << ": ";
	if (n > 2) {
		if (middle == 1) {
			cout << 1 << " " << n - 1;
		}
		else {
			for (int i = 1; i <= middle; i++) {
				cout << i << " " << n - i;
				if (i < middle)
					cout << ", ";
			}
		}
	}


}

int main() {
	int n;
	cin >> n;
	vector<int> vector;

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		vector.push_back(input);
	}

	for (int i = 0; i < n; i++) {
		answer(vector[i]);
		cout << "\n";
	}
}