// https://codeforces.com/contest/1204/problem/A

#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int main()
{

    FAST_IO

    string s;
    cin >> s;
    int l = s.length();

    if (l % 2 != 0)
    {
        int ons = 0;
        for (int i = 1; i < l; i++)
        {
            if (s[i] == '1')
            {
                ons++;
                break;
            }
        }
        if (ons)
            l++;
        else
            l--;
    }
    cout << l / 2 << nl;
    return 0;
}