#include <bits/stdc++.h>
using namespace std;

int solve(int N) {
    int ops = 0;
    if (N == 1) {
        return 0;
    }
    if (N % 3 != 0) {
        return -1;
    }
    for (; N != 1; ops++) {
        if (N % 3 != 0) {
            return -1;
        }

        if (N % 6 != 0) {
            N *= 2;
        }else {
            N /= 6;
        }
    }

    return ops;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        long long N;
        cin >> N;
        cout << solve(N);
        cout << endl;
    }

}
