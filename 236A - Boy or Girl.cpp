#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    unordered_set<char> seen;
    for (char c : s) {
        seen.insert(c);
    }

    if (seen.size() % 2 == 0) {
        // even
        cout << "CHAT WITH HER!";
    }else {
        cout << "IGNORE HIM!";
    }
}
