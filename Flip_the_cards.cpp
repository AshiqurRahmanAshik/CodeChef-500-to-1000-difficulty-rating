/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLIPCARDS
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
        int n, x;
        cin >> n >> x;
        if (n == x || x == 0)
        {
            cout << 0 << endl;
        }
        else if (x <= n / 2)
        {
            cout << x << endl;
        }
        else
        {
            cout << n - x << endl;
        }
    }
    return 0;
}