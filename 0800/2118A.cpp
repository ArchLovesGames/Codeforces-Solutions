#include <bits/stdc++.h>
using namespace std;


#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

#define forn(i,a,n) for(long long i = a; i < n; i++)

typedef vector<int> vi;

void solve(int n, int x){

    if (n == x)
    {
        forn(i, 0, n)
        {
            cout << 1;
        }
    }
    else{
        if (x == 0)
        {
            forn(i, 0, n)
            {
                cout << 0;
            }
        }

        else
        {
            cout << 1;
            
            forn(i, 1, n-x)
            {
                cout << 0;
            }
            forn(i, n-x, n-1)
            {
                cout << 1;
            }

            cout << 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    forn (i, 0, t)
    {
        int n,x;
        cin >> n >> x;
        solve(n,x);
        cout << "\n";
    }
    return 0;
}