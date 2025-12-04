/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRUESCORE
 Date: 04/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c, d;
        cin >> a >> b;
        cin >> c >> d;
        if (a <= c && b <= d)
        {
            cout << "POSSIBLE" << endl;
        }
        else
        {
            cout << "IMPOSSIBLE" << endl;
        }
    }
    return 0;
}