#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int num;
    int count = 0;
    int score = 0;
    cin >> num;

    for (int i = 0; i < num; i++) {
        int input;
        cin >> input;

        if (input == 1)
            score += ++count;
        else
            count = 0;
    }
    cout << score;
}