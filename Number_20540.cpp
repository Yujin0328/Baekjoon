#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;


int main() {
	string mbti, lover;
	cin >> mbti;

	if (mbti[0] == 'E') lover += 'I';
	else lover += 'E';

	if (mbti[1] == 'S') lover += 'N';
	else lover += 'S';

	if (mbti[2] == 'T') lover += 'F';
	else lover += 'T';

	if (mbti[3] == 'J') lover += 'P';
	else lover += 'J';

	cout << lover;
}