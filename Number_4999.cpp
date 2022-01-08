#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


int main() {
	string jae, doctor;
	cin >> jae >> doctor;

	if (jae.length() >= doctor.length())
		cout << "go";
	else
		cout << "no";
}