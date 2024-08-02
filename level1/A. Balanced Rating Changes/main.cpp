// https://codeforces.com/contest/1237/problem/A

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

    int n, a, nup, ndown, pup, pdown, x;
    n = a = nup = ndown = pup = pdown = x = 0;
    cin >> n;

    while (n--)
    {
        cin >> a;
        x = a / 2;
        if (a % 2 == 0)
        {
            cout << x << nl;
        }
        else if (a > 0)
        {
            if (pup > pdown)
            {
                cout << x << nl;
                pdown++;
            }
            else
            {
                cout << x + 1 << nl;
                pup++;
            }
        }
        else
        {
            if (nup > ndown)
            {
                cout << x << nl;
                ndown++;
            }
            else
            {
                cout << x - 1 << nl;
                nup++;
            }
        }
    }

    return 0;
}