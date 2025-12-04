/*
Problem Link:
 Date:
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int p, q, r, s;
        cin >> p >> q >> r >> s;
        if (p + q + r < s || q + r + s < p || r + s + p < q || p + q + s < r)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}