#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int test;
	cin >> test;

	int* arr = new int[test];

	for (int i = 0; i < test; i++) {
		int number, win_player1 = 0, win_player2 = 0;
		cin >> number;

		for (int j = 0; j < number; j++) {
			char player1, player2;
			cin >> player1 >> player2;

			if (player1 == 'R') {
				if (player2 == 'S') win_player1++;
				else if (player2 == 'P') win_player2++;
			}
			else if (player1 == 'S') {
				if (player2 == 'R') win_player2++;
				else if (player2 == 'P') win_player1++;
			}
			else {
				if (player2 == 'S') win_player2++;
				else if (player2 == 'R') win_player1++;
			}
		}

		if (win_player1 == win_player2)
			arr[i] = 0;
		else if (win_player1 < win_player2)
			arr[i] = 2;
		else
			arr[i] = 1;
	}

	for (int i = 0; i < test; i++) {
		if (arr[i] == 0)
			cout << "TIE";
		else if (arr[i] == 1)
			cout << "Player 1";
		else
			cout << "Player 2";
		cout << "\n";
	}
}