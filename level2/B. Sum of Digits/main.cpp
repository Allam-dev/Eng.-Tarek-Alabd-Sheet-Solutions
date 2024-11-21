// https://codeforces.com/contest/102/problem/B

#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

using namespace std;

int main()
{
    FIO

        string n;
    cin >> n;
    ll sum = 0;
    ll output = 0;

    while (n.length() > 1)
    {
        sum = 0;
        for (auto c : n)
            sum += (c - '0');
        output++;
        n = to_string(sum);
    }

    cout << output << nl;

    return 0;
}