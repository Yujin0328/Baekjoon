#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int test;
	cin >> test;
	int* win = new int[test];

	for (int i = 0; i < test; i++) {
		int yon = 0, kor = 0;
		for (int j = 0; j < 9; j++) {
			int yoninput, korinput;
			cin >> yoninput >> korinput;
			yon += yoninput;
			kor += korinput;
		}
		if (yon > kor)
			win[i] = 1;
		else if (yon == kor)
			win[i] = 0;
		else
			win[i] = 2;
	}

	for (int i = 0; i < test; i++) {
		switch (win[i]) {
		case 1: cout << "Yonsei"; break;
		case 2: cout << "Korea"; break;
		case 0: cout << "Draw"; break;
		}
		cout << "\n";
	}
}