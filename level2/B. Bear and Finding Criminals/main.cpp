// https://codeforces.com/contest/680/problem/B

#include <bits/stdc++.h>
#define nl '\n'
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

using namespace std;

int main()
{
    int n, a, result = 0, cities_in_d = 0, criminal_in_d = 0;
    cin >> n >> a;
    int map[n + 1];
    map[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> map[i];
    }

    result = map[a];

    for (int d = 1; d < n; d++)
    {

        criminal_in_d = 0;
        cities_in_d = 0;

        if (a + d <= n)
        {
            cities_in_d++;
            criminal_in_d += map[a + d];
        }
        if (a - d > 0)
        {
            cities_in_d++;
            criminal_in_d += map[a - d];
        }

        if (criminal_in_d == cities_in_d)
            result += criminal_in_d;
    }

    cout << result << nl;

    return 0;
}