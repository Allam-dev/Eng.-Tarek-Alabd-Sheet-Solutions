// https://codeforces.com/contest/298/problem/A

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
    int n, r1, r2, l1, l2, next;
    string s;
    n = r1 = r2 = l1 = l2 = 0;
    cin >> n;
    cin >> s;
    s = '.' + s;
    for (int i = 1; i < n; i++)
    {
        next = i + 1;
        if (s[i] == '.' && s[next] == 'R')
            r1 = next;
        else if (s[i] == '.' && s[next] == 'L')
            l1 = next;
        else if (s[i] == 'R' && s[next] == 'L')
        {
            r2 = i;
            l1 = next;
        }
        else if (s[i] == 'R' && s[next] == '.')
        {
            r2 = i;
            break;
        }
        else if (s[i] == 'L' && s[next] == '.')
        {
            l2 = i;
            break;
        }
    }
    if (r1 && l1)
        cout << r1 << ' ' << r2 << nl;
    else if (r1)
        cout << r1 << ' ' << r2 + 1 << nl;
    else
        cout << l2 << ' ' << l1 - 1 << nl;

    return 0;
}