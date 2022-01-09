#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int businessrow, businessseat, econimicrow, economicseat, result = 0;
	cin >> businessrow >> businessseat >> econimicrow >> economicseat;

	result = businessrow * businessseat + econimicrow * economicseat;
	cout << result;
}