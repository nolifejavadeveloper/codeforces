#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr(N * 2, 0);
    for (int i = 0; i < N * 2; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int minDiff = INT_MAX;

    for (int i = 0; i < N * 2; i++) {
        for (int j = 0; j < N * 2; j++) {
            int currDiff = 0;
            vector<int> temp;
            for (int k = 0; k < N * 2; k++) {
                if (k == i || k == j) continue;
                temp.push_back(arr[k]);
            }

            int ind = 0;
            for (int k = 0; k < N - 1; k++) {
                currDiff += abs(temp[ind] - temp[ind + 1]);
                ind += 2;
            }

            minDiff = min(minDiff, currDiff);
        }
    }

    cout << minDiff << endl;


    return 0;
}
