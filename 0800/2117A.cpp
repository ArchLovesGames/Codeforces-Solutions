#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

void solve(int n, int x, vector<int>& door)
{
    int i = 0;
    int check = 0;
    while (i < n && door[i] != 1)
        i++;
    
    i += x;

    if (i >= n)
    {
        check = 0;
    }

    else
    {
        while (i < n)
        {
            if (door[i] == 1)
            {
                check = 1;
                break;
            }
            else
                check = 0;
            i++;
        }
    }

    if (check == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    fast_io;
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int k = 0; k < n; k++)
        
            cin >> arr[k];
    
        solve(n, x, arr);
    }
    return 0;

}
