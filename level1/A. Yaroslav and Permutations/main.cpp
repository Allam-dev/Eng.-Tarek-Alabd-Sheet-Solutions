#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define yes "YES"
#define no "NO"
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int main()
{

    FAST_IO
    int n, x, size;
    bool ok = true;
    cin >> n;

    map<int, int> nums;
    for (int i = 0; i < n; i++)
    {

        cin >> x;
        nums[x]++;
    }
    size = nums.size();

    for (auto i : nums)
    {

        if (float(i.second) > round(n / 2.0))
        {
            ok = false;
            break;
        }
    }

    if (ok)
        cout << yes << nl;
    else
        cout << no << nl;

    return 0;
}