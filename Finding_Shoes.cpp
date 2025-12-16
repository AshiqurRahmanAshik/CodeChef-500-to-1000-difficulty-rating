/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FINDSHOES
 Date:  16/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        if (n < m)
        {
            cout << n << endl;
        }
        else
        {
            cout << 2 * n - m << endl;
        }
    }
    return 0;
}