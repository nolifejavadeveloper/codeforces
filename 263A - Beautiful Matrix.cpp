#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int num;
            cin >> num;
            if (num == 1) {
                cout << abs(3 - j) + abs(3 - i);
            }
        }
    }
}
