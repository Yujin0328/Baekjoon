#include <stdio.h> 
#include <iostream> 
using namespace std; 

int main() { 
	int n, m;
	cin >> n >> m;

	int hun = m / 100;
	int ten = (m / 10) % 10;
	int one = m % 10;

	cout << n * one << " \n" << n * ten << "\n" << n * hun << "\n" << n * m;
}

