// https://codeforces.com/contest/66/problem/B

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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n < 3)
    {
        cout << n << nl;
    }
    else
    {

        int f, b, counter, result = 0, pointer = 0;

        while (pointer < n)
        {
            counter = 1;

            // move back
            b = pointer;
            while (b > 0 && arr[b] >= arr[b - 1])
            {
                counter++;
                b--;
            }

            // move forward
            f = pointer;
            while (f < (n - 1) && arr[f + 1] <= arr[f])
            {
                counter++;
                f++;
            }
            pointer = f + 1;
            if (counter > result)
            {
                result = counter;
            }
           
        }
        cout << result;
    }
    return 0;
}