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

    int n, output = -1, tmp = 0;
    string s;
    cin >> n;
    cin >> s;
    int coords[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coords[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'R' && s[i + 1] == 'L')
        {
            tmp = (coords[i + 1] - coords[i]) / 2;
            if (output == -1)
                output = tmp;
            else if (tmp < output)
            {
                output = tmp;
            }
        }
    }

    cout << output << nl;

    return 0;
}