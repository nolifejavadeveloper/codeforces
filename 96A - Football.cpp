#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;
    char last = '0';
    int count = 0;
    for (char c : s) {
        if (last != c) {
            count = 1;
            last = c;
        }else {
            count++;
            if (count >= 7) {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";

    return 0;
}
