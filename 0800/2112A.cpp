#include <bits/stdc++.h> 
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

#define forn(i,a,n) for(long long i = a; i < n; i++)

void solve(int a, int x, int y)
{
    if ((x < a && y > a) || (x > a && y < a)) {
        cout << "NO";
    } else {
        if (x == a || y == a) {
            cout << "NO";
        } else {
            cout << "YES";
        }
    }
}

int main()
{
    int t;
    cin >> t;
    forn(i, 0, t) {
        int n, x, y;
        cin >> n >> x >> y;
        solve(n, x, y);
        cout << "\n";
    }
    return 0;
}