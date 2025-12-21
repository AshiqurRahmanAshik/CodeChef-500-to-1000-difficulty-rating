/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/XJUMP
 Date:  21/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y;
        cin >> x >> y;
        cout << (x / y) + (x % y) << endl;
    }
    return 0;
}