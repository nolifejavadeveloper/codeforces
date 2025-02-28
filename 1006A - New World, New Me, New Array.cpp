#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int N, K, P;
        cin >> N >> K >> P;

        int ans = abs(double(K) / P);
        if (K % P != 0) {
            ans++;
        }

        if (ans > N) {
            cout << -1 << endl;
            continue;
        }

        cout << ans << endl;
    }
}
