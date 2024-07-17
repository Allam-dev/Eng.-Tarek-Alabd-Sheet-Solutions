// https://codeforces.com/contest/579/problem/A

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

    int x, y = 0;
    cin >> x;

    while (x)
    {
        if (x & 1)
            y++;
        x >>= 1;
    }

    cout << y << nl;

    return 0;
}