// https://codeforces.com/contest/16/problem/B

#include <bits/stdc++.h>
#define nl '\n'
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

using namespace std;

int main()
{
    int n, m, a, b;
    long result = 0;
    cin >> n >> m;
    int arr[11] = {0};

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        arr[b] += a;
    }

    for (int i = 10; i > 0 && n > 0; i--)
    {
        if (arr[i] >= n)
        {
            result += i * n;
            n = 0;
        }
        else
        {
            result += i * arr[i];
            n -= arr[i];
        }
    }

    cout << result << nl;

    return 0;
}