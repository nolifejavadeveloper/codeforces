#include <iostream>
#include <variant>
using namespace std;

int main() {
    int N;
    cin >> N;
    int ans = 0;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        if (s.find('-') == variant_npos) {
            // plus
            ans++;
        }else {
            ans--;
        }
    }

    cout << ans;
}
