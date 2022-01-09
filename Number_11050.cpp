#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;


int main() {
	int n, k, muln = 1, mulk = 1;
	cin >> n >> k;

	for (int i = 1; i <= k; i++) {
		muln *= n;
		n--;
		mulk *= i;
	}

	cout << muln / mulk;
}