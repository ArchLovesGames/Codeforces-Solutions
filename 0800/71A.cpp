#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

void solve(int n, vector<string>& s, vector<int>& l) {
    for (int j = 0; j < n; j++) {
        if (l[j] > 10) {
            char x = s[j][0];
            char y = s[j][l[j] - 1];
            cout << x << (l[j] - 2) << y << "\n";
        } else {
            cout << s[j] << "\n";
        }
    }
}

int main() {
    fast_io;
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> l(n);

    for (int i = 0; i < n; i++) {
        cin >> s[i];
        l[i] = s[i].length();
    }

    solve(n, s, l);
    return 0;
}