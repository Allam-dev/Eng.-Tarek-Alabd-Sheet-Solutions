// https://codeforces.com/contest/463/problem/B

#include <bits/stdc++.h>
#define nl '\n'
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

using namespace std;

int main()
{

    FIO

        int n,
        energy = 0, cost = 0;
    cin >> n;
    int pylons[n + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> pylons[i+1];
        energy += pylons[i] - pylons[i+1];
        if (energy < 0)
        {
            cost += -1 * energy;
            energy = 0;
        }
    }

    cout << cost << nl;

    return 0;
}