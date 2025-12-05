/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFSCORE
 Date:  05/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        if (y % x == 0 && (y / x) <= n)
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