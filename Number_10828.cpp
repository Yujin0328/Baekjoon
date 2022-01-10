#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

struct stack {
	int last;
	int arr[10000];

	void init() {
		last = -1;
	}
	void push(int input) {
		arr[++last] = input;
	}
	int empty() {
		if (last == -1) return 1;
		else return 0;
	}
	int pop() {
		if (empty() == 1)
			return -1;
		else
			return arr[last--];
	}
	int size() {
		return last + 1;
	}
	int top() {
		if (empty() == 1)
			return -1;
		else
			return arr[last];
	}
};

int main() {
	int num;
	cin >> num;
	stack s;
	s.init();
	for (int i = 0; i < num; i++) {
		string request;
		cin >> request;
		if (request == "push") {
			int input;
			cin >> input;
			s.push(input);
		}
		else if (request == "pop") {
			cout << s.pop() << "\n";
		}
		else if (request == "size") {
			cout << s.size() << "\n";
		}
		else if (request == "empty") {
			cout << s.empty() << "\n";
		}
		else if (request == "top") {
			cout << s.top() << "\n";
		}
	}
}