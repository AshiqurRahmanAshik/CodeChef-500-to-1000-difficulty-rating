/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXAMCHEF
 Date: 02/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x * y < 2 * z)
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