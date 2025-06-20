#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 
                  'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};


void solve(int n, int l)
{
    char pwd[n + 1];
    for (int i = 0; i < n; i++)
    {
        static int j = 0;
        pwd[i] = alpha[j];
        if (j == (l-1))
        {
            j = 0;
        }
        else{
            j++;
        }
        
    }
    pwd[n] = '\0';
    cout << pwd <<endl;
}

int main(){
    int n,k;
    cin >> n >> k;
    solve (n,k);
    return 0;
}