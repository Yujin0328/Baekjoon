#include <stdio.h> 
#include <iostream> 
using namespace std; 

int main() { 
	int A, B, V; 
	cin >> A; 
	cin >> B; 
	cin >> V; 
	
	int day; 
	
	if((V-A)%(A-B)==0) 
		day = (V-A)/(A-B); 
	else 
		day = (V-A)/(A-B)+1; 
	
	cout << ++day; 
}

