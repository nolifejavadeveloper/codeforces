#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        int size_of_string = s.size();
        if (size_of_string > 10) {
            string new_string;
            new_string += s[0];
            new_string += to_string(size_of_string - 2);
            new_string += s[size_of_string - 1];
            cout << new_string;
        }else {
            cout << s;
        }

        cout << endl;
    }
}
