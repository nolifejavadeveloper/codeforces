#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;

    long long oddLength = ceil(N / 2);

    int start = -1;
    if (K > oddLength) {
        N -= oddLength;
        start = 0;
    }

    cout << start + N * 2;

    return 0;
}
