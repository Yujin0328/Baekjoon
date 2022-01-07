#include <stdio.h> 
#include <iostream> 
using namespace std; 

int main() { 
	int max = 0; 
	int count = 0; 
	for(int i = 1; i<10; i++){ 
		int num; cin >> num; 
		
		if(num >= max){ 
			max = num; 
			count = i; 
		} 
	} 
	cout << max << '\n' << count; 
}

