/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CYCLICQD
 Date:  05/01/26
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
        cin >> a >> b >> c >> d;
        if (a + c == 180 || b + d == 180)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}