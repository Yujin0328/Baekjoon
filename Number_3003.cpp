#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int arr[] = { 1, 1, 2, 2, 2, 8 };

    for (int i = 0; i < 6; i++) {
        int input;
        cin >> input;

        cout << arr[i] - input << " ";
    }
}