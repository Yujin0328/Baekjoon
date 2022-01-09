#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    if (a > b)
        swap(a, b);

    if (a != b) {
        cout << b - a - 1 << "\n";
        for (long long i = a + 1; i < b; i++) {
            cout << i;
            if (i != b - 1)
                cout << " ";
        }
    }
    else {
        cout << 0;
    }

}