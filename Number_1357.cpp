#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int number(int n) {
    int count = 0;
    while (n >= 10) {
        n /= 10;
        count++;
    }
    return ++count;
}

int reverse(int a) {
    int count = number(a);

    double result = 0;
    for (double i = count - 1; i >= 0; i--) {
        result += (a % 10) * pow(10, i);
        a /= 10;
    }

    return result;
}

int main() {
    int a, b;
    cin >> a >> b;

    int result = reverse(a) + reverse(b);
    cout << reverse(result);
}