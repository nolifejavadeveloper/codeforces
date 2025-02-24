#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> scores(N);

    int ans = 0;

    for (int i = 0; i < N; i++) {
        cin >> scores[i];
    }

    int req = scores[K - 1]; // -1 to convert into index
    // i just realized 0 isn't positive
    for (int num : scores) {
        if (num > 0 && num >= req) {
            ans++;
        }
    }

    cout << ans;
}
