#include <bits/stdc++.h>
using namespace std;

int solve() {
    int maxVal = 0;
    int maxPossible = 0;
    int arr[5];
    for (int i = 0; i < 5; i++) {
        if (i == 2) continue;
        cin >> arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    for (int i = -200; i <= 200; i++) {
        arr[2] = i;

        int possible = 0;
        if (arr[0] + arr[1] == arr[2]) {
            possible++;
        }
        if (arr[1] + arr[2] == arr[3]) {
            possible++;
        }
        if (arr[2] + arr[3] == arr[4]) {
            possible++;
        }

        maxPossible = max(maxPossible, possible);
    }

    return maxPossible;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cout << solve() << endl;
    }

    return 0;
}


