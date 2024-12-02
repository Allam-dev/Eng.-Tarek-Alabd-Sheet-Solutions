// https://codeforces.com/contest/47/problem/B

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

        string input;
    string list[3];
    string output = "000";

    for (int i = 0; i < 3; i++)
    {
        cin >> input;
        if (input[1] == '<')
            list[i] = list[i] + input[0] + input[2];
        else
            list[i] = list[i] + input[2] + input[0];
    }

    if (list[0][0] == list[1][0])
        output[0] = list[0][0];
    else if (list[0][0] == list[2][0])
        output[0] = list[0][0];
    else if (list[1][0] == list[2][0])
        output[0] = list[1][0];

    if (list[0][1] == list[1][1])
        output[2] = list[0][1];
    else if (list[0][1] == list[2][1])
        output[2] = list[0][1];
    else if (list[1][1] == list[2][1])
        output[2] = list[1][1];

    output[1] = 198 - output[0] - output[2];

    cout << (output[0] == '0' ? "Impossible" : output) << nl;
}