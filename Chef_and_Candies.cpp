/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFCAND
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
        int n, x;
        cin >> n >> x;
        if (n < x)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (n - x + 3) / 4 << endl;
        }
    }
    return 0;
}