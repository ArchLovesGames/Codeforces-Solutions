#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

void solve(int a, int b, int c, int d){
    if (c >= d)
    {
        if (a < b && a < d)
            cout << "Flower\n";
        else{
            cout << "Gellyfish\n";
        }
    }
    else
    {
        if (b <= c && b <= a)
            cout << "Gellyfish\n";
        else
            cout << "Flower\n";
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        solve(a,b,c,d);
    }
    return 0;
}