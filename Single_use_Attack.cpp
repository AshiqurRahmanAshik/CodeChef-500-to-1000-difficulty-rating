/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SINGLEUSE
 Date:  09/01/26
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int h, x, y;
        cin >> h >> x >> y;
        cout << ((h - y + x - 1) / x) + 1 << endl;
    }
    return 0;
}