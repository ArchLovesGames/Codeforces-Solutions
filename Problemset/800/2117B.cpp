#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

void solve(int n){
    int arr[n];
    arr[0] = 1;
    arr [n-1] = 2;
    int j = n;
    for (int i = 1; i < n-1; i++)
    {
        arr[i] = j;
        j--;
    }
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    cout << "\n";
}

int main()
{
    fast_io;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        solve(n);
    }
            return 0;

}