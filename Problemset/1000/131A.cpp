#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

string solve(string word)
{
    if (word.size() == 1)
    {
        if (islower(word[0])){
        word[0] = toupper(word[0]);
        return word;}
        else
        {
            word [0] = tolower(word[0]);
            return word;
        }
    }
    else{
    for (int i = 1; i < word.size(); i++){
        if (islower(word[i]))
        {
            return word;
        }
    }
    for (char &c : word)
        {
            if (isupper(c)){
                c = tolower(c);
            }
            else{
                c = toupper(c);
            }
        }
    return word;
}}

int main()
{
    fast_io;
    string w;
    cin >> w;
    string s = solve(w);
    cout << s;
    return 0;
}
