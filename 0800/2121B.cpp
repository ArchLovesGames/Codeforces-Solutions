#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
int solve(int n, string& sub){
 
    if (n < 3){
        return 0;}
    else{
    char x = sub[0];
    char y = sub[n-1];
    if (n == 3)
    {
        if (sub [1] == x || sub [1] == y)
            return 1;
        else 
            return 0;
    }
    else{
    for (int i = 1; i < n-1; i++)
    {
        for (int j = i+1 ; j < n; j++)
        {
            if (sub[i] == sub[j] || sub[i] == x || sub[i] == y){
                return 1;
            }
        }
    }
    return 0;}}
 
}
 
int main() {
    fast_io;
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int l = solve(n, s);
        if (l == 1){
            cout << "Yes\n";}
        else{
            cout << "No\n";}
        
    }
    return 0;
}