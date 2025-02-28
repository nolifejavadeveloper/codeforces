#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        int hyphens = 0;
        for (int j = 0; j < N; j++) {
            char c;
            cin >> c;

            if (c == '-') {
                hyphens++;
            }
        }

        long long a = hyphens / 2;
        long long b = hyphens - a;
        long long c = N - hyphens;

        cout << a * b * c << endl;
    }
}
