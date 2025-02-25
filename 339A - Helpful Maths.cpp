#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> ints;
	for (int i = 0; ; i++) {
        ints.push_back(s[i] - '0');
        if (i < s.size() - 1) {
            i++;
        }else {
            break;
        }
    }

    sort(ints.begin(), ints.end());
    
    cout << ints[0];

    for (int i = 1; i < ints.size(); i++) {
        cout << "+";
        cout << ints[i];
    }
}
