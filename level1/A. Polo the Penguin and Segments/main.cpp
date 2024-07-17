#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int get_range(int n1, int n2)
{
    return n2 - n1 + 1;
}

int main()
{

    FAST_IO

    int n, k, l, r, value = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        value += get_range(l, r);
    }

    if (value % k == 0)
        cout << 0 << nl;
    else
    {
        int x = value / k + 1;
        cout << k * x - value << nl;
    }

    return 0;
}