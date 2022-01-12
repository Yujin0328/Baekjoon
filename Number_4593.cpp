#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	while (true) {
		string p1, p2;
		int score1 = 0, score2 = 0;
		cin >> p1 >> p2;
		if (p1 == "E" && p2 == "E") break;

		for (int i = 0; i < p1.length(); i++) {
			if (p1[i] == 'R') {
				if (p2[i] == 'S') score1++;
				else if (p2[i] == 'P') score2++;
			}
			else if (p1[i] == 'S') {
				if (p2[i] == 'R') score2++;
				else if (p2[i] == 'P') score1++;
			}
			else if (p1[i] == 'P') {
				if (p2[i] == 'S') score2++;
				else if (p2[i] == 'R') score1++;
			}
		}

		cout << "P1: " << score1 << "\n";
		cout << "P2: " << score2 << "\n";
	}
}