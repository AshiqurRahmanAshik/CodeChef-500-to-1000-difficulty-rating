/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CRICUP
 Date:  03/01/26
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y, d;
        cin >> x >> y >> d;
        if (abs(x - y) <= d)
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