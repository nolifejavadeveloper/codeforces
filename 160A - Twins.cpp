#include <bits/stdc++.h>
using namespace std;
int sum = 0;


int main() {
    vector<int> coins;
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;

        sum += num;
        coins.push_back(num);
    }

    sort(coins.begin(), coins.end());
    int grandSum = 0;
    int setSize = 0;
    for (int i = 1; i <= coins.size(); i++) {
        grandSum += coins[coins.size() - i];
        setSize++;
        if (grandSum > sum / 2) {
            cout << setSize;
            return 0;
        }
    }

    return 0;
}
